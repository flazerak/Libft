/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:00:19 by flazerak          #+#    #+#             */
/*   Updated: 2021/12/17 18:20:24 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lenght(int n)
{
	int	count;

	count = 1;
	while (n / 10)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*str;
	int		nbr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_lenght(n);
	if (n < 0)
		size++;
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		nbr = -1 * n;
	else
		nbr = n;
	str[size] = '\0';
	while (size--)
	{
		str[size] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
