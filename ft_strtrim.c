/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:15:43 by flazerak          #+#    #+#             */
/*   Updated: 2021/12/21 18:11:32 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == s1)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s1;
	size_t	i;
	size_t	debut;
	size_t	fin;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	debut = 0;
	fin = ft_strlen(s1) - 1;
	while (s1[debut] && (is_in_set(s1[debut], set)))
		debut++;
	while (fin > debut && (is_in_set(s1[fin], set)))
		fin--;
	new_s1 = malloc(sizeof(char) * (fin - debut + 2));
	if (!new_s1)
		return (NULL);
	i = 0;
	while (s1[debut] && debut <= fin)
		new_s1[i++] = s1[debut++];
	new_s1[i] = '\0';
	return (new_s1);
}
