/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:25:33 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/27 23:59:32 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap()
{
	return (NULL);
}

/*
{
	t_list	*new;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	head = new;
	if (lst && f && del)
	{
		while (lst != NULL)
		{
			new->next = ft_lstnew(f(lst->content));
			if (!new)
			{
				ft_lstclear(&head, del);
				return (NULL);
			}
			new = new->next;
			lst = lst->next;
		}
	}
	return (head);
}*/
