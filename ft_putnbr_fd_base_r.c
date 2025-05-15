/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_base_r.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:12:04 by matoledo          #+#    #+#             */
/*   Updated: 2025/05/15 10:45:52 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	print_number(int nbr, char *base, int base_size, int fd)
{
	int	bytes_returned;

	bytes_returned = 0;
	if (nbr / base_size > 0)
	{
		bytes_returned += print_number(nbr / base_size, base, base_size, fd);
	}
	return (bytes_returned + (int)write(fd, (base + (nbr % base_size)), 1));
}

//write a decimal number in any base
int	ft_putnbr_fd_base_r(long long nbr, char *base, int base_size, int fd)
{
	int	bytes_returned;

	bytes_returned = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		bytes_returned += (int)write(fd, "-", 1);
	}
	bytes_returned += print_number(nbr, base, base_size, fd);
	return (bytes_returned);
}
