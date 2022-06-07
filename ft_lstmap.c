/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myyou <myyou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:28:03 by myyou             #+#    #+#             */
/*   Updated: 2022/06/07 12:44:56 by myyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_next;
	t_list	*curr;

	if (!lst || !f || !del)
		return (NULL);
	new_head = ft_lstnew(f(lst->content));
	if (!new_head)
		return (NULL);
	curr = new_head;
	lst = lst->next;
	while (lst)
	{
		new_next = ft_lstnew(f(lst->content));
		if (!new_next)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		curr->next = new_next;
		curr = new_next;
		lst = lst->next;
	}
	return (new_head);
}
