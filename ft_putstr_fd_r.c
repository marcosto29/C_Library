/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_r.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:57:24 by matoledo          #+#    #+#             */
/*   Updated: 2025/05/15 09:58:43 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd_r(char *s, int fd)
{
	int	bytes_printed;

	bytes_printed = 0;
	while (*s)
		bytes_printed += (int)write(fd, s++, 1);
	return (bytes_printed);
}
