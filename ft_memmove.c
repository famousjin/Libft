/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myyou <myyou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:12:40 by myyou             #+#    #+#             */
/*   Updated: 2022/06/07 11:28:44 by myyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src2;
	char		*dst2;
	size_t		i;

	i = -1;
	dst2 = (char *)dst;
	src2 = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst2 > src2)
		while ((int)(--len) >= 0)
			dst2[len] = src[len];
	else
		while (++i < n)
			dst2[i] = src2[i];
	return (dst);
}
