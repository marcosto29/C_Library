/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:11:18 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/16 15:05:13 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;

	if (*little == '\0')
		return ((char *)big);
	len_little = ft_strlen(little);
	while (len--)
	{
		if (*big == *little)
		{
			if (len > len_little)
			{
				if (ft_strncmp(big, little, len_little) == 0)
				{
					return ((char *)big);
				}
			}
		}
		big++;
	}
	return (0);
}
