/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flazerak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:43:44 by flazerak          #+#    #+#             */
/*   Updated: 2021/12/15 19:43:44 by flazerak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*a;

	if (lst == NULL && del != NULL)
		return ;
	a = *lst;
	while (a)
	{
		tmp = a->next;
		del(a->content);
		free(a);
		a = tmp;
	}
	*lst = NULL;
}
