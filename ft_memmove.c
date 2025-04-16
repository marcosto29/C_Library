/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:12:15 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/16 17:49:44 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*pt_dest;
	char	*pt_src;

	if (!dest && !src)
		return (dest);
	pt_dest = dest;
	pt_src = src;
	if (pt_src < pt_dest)
	{
		pt_dest += n - 1;
		pt_src += n - 1;
		while (n--)
			*pt_dest-- = *pt_src--;
	}
	else
	{
		while (n--)
			*pt_dest++ = *pt_src++;
	}
	return (dest);
}
