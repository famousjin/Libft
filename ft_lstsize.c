/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myyou <myyou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:09:33 by myyou             #+#    #+#             */
/*   Updated: 2022/06/07 11:04:50 by myyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (!lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
