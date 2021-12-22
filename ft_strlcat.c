/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 03:16:39 by flazerak          #+#    #+#             */
/*   Updated: 2021/11/17 03:16:39 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclength;
	size_t	dstlength;
	size_t	re;

	srclength = ft_strlen(src);
	dstlength = ft_strlen(dst);
	i = 0;
	j = dstlength;
	if (dstsize == 0)
		return (srclength);
	if (dstsize <= dstlength)
		return (dstsize + srclength);
	re = srclength + dstlength;
	while (dstlength < (dstsize - 1) && *src)
	{
		dst[dstlength++] = *src;
		src++;
	}
	dst[dstlength] = 0;
	return (re);
}
