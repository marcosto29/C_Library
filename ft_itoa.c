/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:36:34 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/14 20:47:47 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_recursive(char *string, int n)
{
	if (n / 10 > 0)
		string = ft_recursive(string, n / 10);
	*string++ = n % 10 + '0';
	return (string);
}

char	*ft_itoa(int n)
{
	char	*pt_return;
	size_t	size;
	int		aux_n;

	aux_n = n;
	size = 0;
	while (aux_n > 0)
	{
		aux_n /= 10;
		size++;
	}
	pt_return = ft_calloc(sizeof(char), size + 1);
	ft_recursive(pt_return, n);
	return (pt_return);
}
