/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:35:47 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/13 17:03:54 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*pt_aux;
	char	**pt_return;
	int		counter;
	
	counter = 0;
	pt_aux = s;
	while (*pt_aux)
	{
		if(pt_aux++ == c)
			counter++;
	}
	pt_return = malloc(sizeof(char *) * counter);
	pt_aux = s;
	while(pt_aux)
	{
		if (pt_aux == c)
		{
			*pt_return = pt_aux;
			pt_return++;
		}
		pt_aux++;
	}
	return (pt_return);
}
