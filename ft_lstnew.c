/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:47:55 by matoledo          #+#    #+#             */
/*   Updated: 2025/04/18 15:18:23 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//t_list *node is a complex pointer that points both the content and next
//to initialized it is the same way any other pointer
//to acces the data same thing happens *node->content or *node->next
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node->content = (t_list *) malloc(sizeof(content));
	node->next = NULL;
	return (node);
}
