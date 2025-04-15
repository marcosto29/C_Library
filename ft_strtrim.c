/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:25:32 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/15 14:30:06 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*pt_return;
	size_t		memory_size;

	while (ft_strchr(set, *s1) != NULL)
		s1++;
	pt_return = s1;
	while (*pt_return)
		pt_return++;
	while (ft_strchr(set, *pt_return) != NULL)
		pt_return--;
	memory_size = (char *)pt_return - s1;
	pt_return = ft_calloc(sizeof(char), memory_size + 2);
	if (!pt_return)
		return (0);
	ft_memcpy((char *)pt_return, s1, memory_size + 1);
	return ((char *)pt_return);
}
