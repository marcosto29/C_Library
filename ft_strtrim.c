/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:25:32 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/16 14:05:14 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	counter;

	counter = 0;
	while (*c++)
	{
		counter++;
	}
	return (counter);
}

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


char	*ft_strdup(const char *s)
{
	size_t	allocate_memory;
	char	*pt_return;

	allocate_memory = ft_strlen(s);
	pt_return = ft_calloc(sizeof(char), allocate_memory + 1);
	if (!pt_return)
		return (0);
	ft_memcpy(pt_return, s, allocate_memory);
	return (pt_return);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*pt_return;
	size_t		memory_size;

	pt_return = s1;
	while (ft_strchr(set, *s1) != NULL)
		s1++;
	while (*pt_return)
		pt_return++;
	while (ft_strchr(set, *pt_return) != NULL)
		pt_return--;
	//TODO si es mas grande s1 cosa mala
	memory_size = pt_return - s1;
	pt_return = ft_calloc(sizeof(char), memory_size + 2);
	if (!pt_return)
		return (0);
	ft_memcpy((char *)pt_return, s1, memory_size + 1);
	return ((char *)pt_return);
}

int	main(void)
{
	char	set[] = " ";
	char	word[] = "           ";
	char	*pt_word;

	pt_word = ft_strtrim(word, set);
	printf("%s", pt_word);
}