/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:04:44 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/08 21:05:53 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlen(const char *c)
{
	unsigned long	counter;

	counter = 0;
	while (*c)
	{
		counter++;
		c++;
	}
	return (counter);
}
