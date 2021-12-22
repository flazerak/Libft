/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:43:48 by flazerak          #+#    #+#             */
/*   Updated: 2021/12/21 00:50:44 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	new_s = (char *)malloc(sizeof(*s1) * (1 + ft_strlen(s1) + ft_strlen(s2)));
	if (!new_s)
		return (NULL);
	i = -1;
	while (s1[++i])
		new_s[i] = s1[i];
	i = 0;
	j = ft_strlen(s1);
	while (s2[i])
		new_s[j++] = s2[i++];
	new_s[j] = '\0';
	return (new_s);
}
