/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:00:41 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/09 15:23:04 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlen(const char *c);

unsigned long	ft_strlcpy(char *dest, const char *src, unsigned long size)
{
	unsigned long	counter;
	char			*pt_dest;

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
