/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:09:33 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/19 21:08:58 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*return_list;
	t_list	*aux;

	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
			del(lst->content);
			free(lst);
			return (0);
		}
		ft_lstadd_back(&return_list, aux);
		lst = lst->next;
	}
	return (return_list);
}
