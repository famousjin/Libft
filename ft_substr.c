/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myyou <myyou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:14:18 by myyou             #+#    #+#             */
/*   Updated: 2022/06/07 12:17:17 by myyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	t;
	size_t	slen;

	t = 0;
	slen = 0;
	if (s == NULL)
		slen = ft_strlen(s);
	if (slen < start)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	ret = (char *)malloc(sizeof(char) * (len +1));
	if (ret == 0)
		return (NULL);
	while (t < len && start + t < slen)
	{
		ret[t] = s[start + t];
		t++;
	}
	ret[t] = '\0';
	return (ret);
}
