/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_MAIN.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:00:00 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/12 21:22:26 by matoledo         ###   ########.fr       */
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

	char	word[] = "abcdefghijklmnñopqrstuvwxyz";
	char	*pt_word = word;
	printf("ft_bzero: ");
	ft_bzero(pt_word + 3, 2);
	printf("%s\n", pt_word);

	//move the pt_word 10 positions
	pt_word += 10;
	int	n = 2;
	while (n--)
		write(1, pt_word++, 1);
	write(1, "\n", 1);
	

	char	word2[] = "abcdefghijklmnñopqrstuvwxyz";
	pt_word = word2;
	printf("bzero: ");
	bzero(pt_word + 3, 2);
	printf("%s\n", pt_word);

	//move the pt_word 10 positions
	pt_word += 10;
	n = 2;
	while (n--)
		write(1, pt_word++, 1);
	write(1, "\n\n\n", 1);
	
	//ft_calloc
	

	//ft_isalnum
	//
}