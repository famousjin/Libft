/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myyou <myyou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:13:56 by myyou             #+#    #+#             */
/*   Updated: 2022/05/16 17:24:43 by myyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = NULL;
	while (*s != (char)c)
	{
		if (*s == c)
			ptr = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)ptr);
}
