/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:35:47 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/15 12:07:25 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_splits_number(const char *to_split, char split_character)
{
	unsigned int	splits;

	splits = 1;
	while (*to_split)
	{
		if (*to_split++ == split_character)
			splits++;
	}
	return (splits);
}

static char	**ft_split_word(char **split, char *to_split, char c)
{
	char			*pt_aux;
	char			*pt_splitted;
	unsigned int	letters;

	if (!to_split)
		return (split);
	pt_aux = to_split;
	letters = 0;
	while (*pt_aux != c)
	{
		pt_aux++;
		letters++;
	}
	pt_splitted = ft_calloc(sizeof(char), (letters + 1));
	ft_memcpy(pt_splitted, to_split, letters);
	pt_aux = ft_strchr(to_split, c);
	if (pt_aux)
		pt_aux++;
	*split++ = pt_splitted;
	ft_split_word(split, pt_aux, c);
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char			*pt_aux;
	char			**pt_return;
	unsigned int	splits;

	pt_aux = (char *)s;
	splits = ft_splits_number(s, c);
	pt_return = ft_calloc(sizeof(char *), (splits + 1));
	ft_split_word(pt_return, pt_aux, c);
	return ((char **)pt_return);
}
