/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myyou <myyou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:11:29 by myyou             #+#    #+#             */
/*   Updated: 2022/06/07 11:41:31 by myyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (!count || !size)
	{
		size = 1;
		count = 1;
	}
	tmp = malloc(size * count);
	if (tmp)
		ft_bzero(tmp, count * size);
	return (tmp);
}
