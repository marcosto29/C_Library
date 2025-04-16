/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 11:18:54 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/16 13:43:33 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pt_return;
	size_t	s_len;

	if (start > len)
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	if (start + len > s_len)
		return (0);
	pt_return = ft_calloc(sizeof(char), len + 1);
	if (!pt_return)
		return (0);
	ft_memcpy(pt_return, s + start, len);
	return (pt_return);
}
