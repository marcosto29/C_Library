/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:08:49 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/16 11:30:34 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*pt_s;

	pt_s = 0;
	while (*s)
	{
		if (*s == c)
			pt_s = (char *)s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (pt_s);
}
