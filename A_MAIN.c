/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_MAIN.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:00:00 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/13 11:16:28 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>

int	main(void)
{
	//ft_atoi
	printf("FT_ATOI:\n\n");
	printf("ft_atoi: %i vs atoi: %i\n", ft_atoi("+42"), atoi("+42"));
	printf("ft_atoi: %i vs atoi: %i\n", ft_atoi("-42"), atoi("-42"));
	printf("ft_atoi: %i vs atoi: %i\n", ft_atoi("+-42"), atoi("+-42"));
	printf("ft_atoi: %i vs atoi: %i\n", ft_atoi("+ 42"), atoi("+ 42"));
	printf("ft_atoi: %i vs atoi: %i\n", ft_atoi(" +42"), atoi(" +42"));
	printf("ft_atoi: %i vs atoi: %i\n", ft_atoi("+4abc2"), atoi("+4abc2"));
	printf("ft_atoi: %i vs atoi: %i\n\n\n", ft_atoi("+42ab"), atoi("+42ab"));
	
	//ft_bzero
	printf("FT_BZER0:\n\n");

	char	bzeroa[] = "abcdefghijklmnñopqrstuvwxyz";
	char	*pt_bzero = bzeroa;
	printf("ft_bzero: ");
	ft_bzero(pt_bzero + 3, 2);
	printf("%s\n", pt_bzero);

	//move the pt_word 10 positions
	pt_bzero += 10;
	int	n = 2;
	while (n--)
		write(1, pt_bzero++, 1);
	write(1, "\n", 1);
	

	char	bzeroa2[] = "abcdefghijklmnñopqrstuvwxyz";
	pt_bzero = bzeroa2;
	printf("bzero: ");
	bzero(pt_bzero + 3, 2);
	printf("%s\n", pt_bzero);

	//move the pt_word 10 positions
	pt_bzero += 10;
	n = 2;
	while (n--)
		write(1, pt_bzero++, 1);
	write(1, "\n\n\n", 1);
	
	//ft_calloc
	printf("FT_CALLOC:\n\n");

	printf("ft_calloc, pointer size: 10\n");
	// int		counter = 10;
	// char	*pt_calloc = ft_calloc(counter, 1);

	//ft_isalnum
	//
}