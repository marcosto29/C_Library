/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:00:42 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/17 10:03:12 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	counter;
	int	number;
	int	negative;

	negative = 0;
	counter = 1;
	number = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == 43 || *nptr == 45)
	{
		if (*nptr == 45)
			negative++;
		nptr++;
	}
	while (ft_isdigit(*(nptr + 1)) != 0 && ft_isdigit(*nptr) != 0)
		nptr++;
	while (ft_isdigit(*nptr) != 0)
	{
		number += counter * (*nptr-- - '0');
		counter *= 10;
	}
	if (negative % 2 != 0)
		number *= -1;
	return (number);
}
