/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:35:47 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/14 20:06:20 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_split_word(char **split, char *to_split, char c)
{
	char	*pt_aux;
	size_t	letters;

	letters = 0;
	pt_aux = to_split;
	while (*pt_aux != c && *pt_aux)
	{
		letters++;
		pt_aux++;
	}
	pt_aux -= letters;
	*split = ft_calloc(sizeof(char), (letters + 1));
	ft_memcpy(*split, pt_aux, letters);
}

char	**ft_split(char const *s, char c)
{
	char	*pt_aux;
	char	**pt_return;
	size_t	splits;

	splits = 1;
	pt_aux = (char *)s;
	while (*pt_aux)
	{
		if (*pt_aux++ == c)
			splits++;
	}
	pt_return = ft_calloc(sizeof(char *), (splits + 1));
	pt_aux = (char *)s;
	while (*pt_aux)
	{
		ft_split_word(pt_return, pt_aux, c);
		pt_aux = ft_strchr(pt_aux, c);
		pt_return++;
		if (!pt_aux)
			break ;
		pt_aux++;
	}
	return ((char **)(pt_return - splits));
}
