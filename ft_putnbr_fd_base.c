/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:12:04 by matoledo          #+#    #+#             */
/*   Updated: 2025/05/15 10:31:31 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_number(int nbr, char *base, int base_size, int fd)
{
	if (nbr / base_size > 0)
	{
		print_number(nbr / base_size, base, base_size, fd);
	}
	write(fd, (base + (nbr % base_size)), 1);
	return ;
}

//write a decimal number in any base
void	ft_putnbr_fd_base(long long nbr, char *base, int base_size, int fd)
{
	if (nbr < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	print_number(nbr, base, base_size, fd);
}
