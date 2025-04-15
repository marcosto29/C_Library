/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:35:47 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/15 12:06:37 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pt_dest;
	const char	*pt_src;

	pt_src = src;
	pt_dest = dest;
	while (n--)
	{
		*pt_dest++ = *pt_src++;
	}
	return (dest);
}

void	*ft_memset(void *dest, int c, size_t n)
{
	char	*pt_dest;

	pt_dest = dest;
	while (n--)
	{
		*pt_dest++ = (char)c;
	}
	return (dest);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*pt_call;

	total = nmemb * size;
	pt_call = malloc(total);
	if (!pt_call)
		return (0);
	ft_bzero(pt_call, total);
	return (pt_call);
}


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

int	main(void)
{
	char	word[] = "lhola que tal estas la verdad";
	char	**pt_word;
	pt_word = ft_split(word, 'l');
	while (*pt_word)
	{
		printf("%s\n", *pt_word++);
	}
}