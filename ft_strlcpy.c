/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:00:41 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/09 20:34:50 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	counter;
	char	*pt_dest;

	counter = ft_strlen(src);
	pt_dest = dest;
	while (size-- > 1 && *src)
	{
		*pt_dest++ = *src++;
	}
	if (size <= 1)
	{
		*pt_dest = '\0';
	}
	return (counter);
}
