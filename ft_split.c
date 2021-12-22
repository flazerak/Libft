/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 23:58:53 by flazerak          #+#    #+#             */
/*   Updated: 2021/12/20 23:03:56 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countsplits(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	*ft_free(char **p, int j)
{
	while (j >= 0)
		free(p[j--]);
	free(p);
	return (NULL);
}

static int	skip_c(char const *s, char c, int i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static char	**ft_malloc(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (malloc((countsplits(s, c) + 1) * sizeof(char *)));
}

char	**ft_split(char const *s, char c)
{
	char	**splt;
	int		i;
	int		start;
	int		j;

	splt = ft_malloc(s, c);
	if (!splt)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		i = skip_c(s, c, i);
		start = i;
		if (!s[i])
			break ;
		while (s[i] && s[i] != c)
			i++;
		splt[j] = ft_substr(s, start, i - start);
		if (!splt[j])
			return (ft_free(splt, j));
		j++;
	}
	splt[j] = NULL;
	return (splt);
}
