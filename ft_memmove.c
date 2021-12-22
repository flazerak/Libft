/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 03:14:16 by flazerak          #+#    #+#             */
/*   Updated: 2021/11/17 03:14:16 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dst1;

	if (!dst && !src)
		return (NULL);
	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	if (dst < src)
	{
		i = -1;
		while (++i < len)
			dst1[i] = src1[i];
	}
	else
	{
		while (len--)
			dst1[len] = src1[len];
	}
	return (dst);
}
