/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:35:47 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/17 23:39:23 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_memory(char **splitted_word)
{
	char	**pt_aux;

	pt_aux = splitted_word;
	while (*pt_aux)
	{
		free(*pt_aux++);
	}
	free(splitted_word);
}

static unsigned int	ft_splits_number(const char *to_split, char split_character)
{
	unsigned int	splits;

	splits = 1;
	while (*to_split)
	{
		if (*to_split == split_character)
		{
			splits++;
			while (*to_split == split_character)
			{
				to_split++;
			}
			continue;
		}
		to_split++;
	}
	return (splits);
}

static unsigned int	ft_letters_counter(const char *to_split, char c)
{
	unsigned int	letters;

	letters = 0;
	while (*to_split != c && *to_split)
	{
		letters++;
		to_split++;
	}
	return (letters);
}

static char	**ft_split_word(char **split, const char *to_split, char c)
{
	char			**pt_splitted;
	char			*splitted;
	unsigned int	letters;

	if (!*to_split)
		return (split);
	pt_splitted = split;
	letters = ft_letters_counter(to_split, c);
	splitted = ft_calloc(sizeof(char), letters + 1);
	if (!splitted)
	{
		free_memory(split);
		return (0);
	}
	while (*to_split != c && *to_split)
		*splitted++ = *to_split++;
	*split++ = splitted - letters;
	while (*to_split == c)
		to_split++;
	ft_split_word(split, to_split, c);
	return (pt_splitted);
}

char	**ft_split(char const *s, char c)
{
	char			**pt_return;
	unsigned int	splits;

	s = ft_strtrim(s, &c);
	splits = ft_splits_number(s, c);
	pt_return = ft_calloc(sizeof(char *), splits + 1);
	if (!pt_return)
		return (0);
	pt_return = ft_split_word(pt_return, s, c);
	return ((char **)pt_return);
}