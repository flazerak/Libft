/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:40:22 by flazerak          #+#    #+#             */
/*   Updated: 2021/12/15 19:40:22 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elt;

	new_elt = malloc(sizeof(t_list));
	if (!new_elt)
		return (NULL);
	new_elt->content = (void *)content;
	new_elt->next = NULL;
	return (new_elt);
}
