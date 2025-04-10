/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:25:12 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/10 16:40:41 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	char	*pt_call;
	
	pt_call = malloc(nmemb * size);
	while (*pt_call)
	{
		*pt_call++ = '\0';
	}
	return (pt_call);
}

int	main(void)
{
	int	*pt_int;

	pt_int = calloc(9223372036854775806, 4);
}