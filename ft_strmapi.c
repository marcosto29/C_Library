/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:37:47 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/14 21:44:55 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*pt_return;
	char			*pt_aux;
	unsigned int	index;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	pt_return = ft_calloc(sizeof(char), (s_len + 1));
	pt_aux = pt_return;
	index = 0;
	while (*s)
	{
		*pt_aux++ = f(index, *s++);
		index++;
	}
	return (pt_return);
}
