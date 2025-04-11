/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:44:14 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/11 14:27:40 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*pt_src;
	char		*pt_dest;

	pt_dest = dest;
	pt_src = src;
	while (n--)
	{
		*pt_dest++ = *pt_src++;
	}
	return (dest);
}
