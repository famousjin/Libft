/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myyou <myyou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:39:12 by myyou             #+#    #+#             */
/*   Updated: 2022/06/07 12:39:35 by myyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_num_word(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
				i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
					i++;
			count++;
		}
	}
	return (count);
}

int	ft_word_len(char *s, char c, int i)
{
	int	a;

	a = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		a++;
	}
	return (a);
}

char	**ft_split2(char **tab, char const *s, char c)
{
	int	i;
	int	vertical;
	int	horizontal;

	i = 0;
	vertical = 0;
	horizontal = 0;
	while (s[i])
	{
		while (s[i] == c)
				i++;
		if (s[i])
		{
			tab[vertical] = (char *)malloc(sizeof(char) * ft_word_len(s, c, s + 1) + 1);
			if (!tab[vertical])
				return (NULL);
			while (s[i] && s[i] != c)
			{
				tab[vertical][horizontal] = s[i];
				i++;
				horizontal++;
			}
			tab[vertical][horizontal] = '\0';
			vertical++;
		}
	}
	tab[vertical] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (ft_num_word(s, c) + 1));
	if (!tab)
		return (NULL);
	ft_split2(tab, s, c);
	return (tab);
}
