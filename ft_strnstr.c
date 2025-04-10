/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:11:18 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/10 13:00:17 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	while (len--)
	{
		if (*big == *little)
		{
			if (ft_strcmp(big, little) == 0)
			{
				return ((char *)big);
			}
		}
		big++;
	}
	return (0);
}
