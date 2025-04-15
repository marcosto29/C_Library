/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:11:18 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/15 16:16:35 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	while (len--)
	{
		if (*big == *little)
		{
			if (ft_strncmp(big, little, len) == 0)
			{
				return ((char *)big);
			}
		}
		big++;
	}
	return (0);
}
