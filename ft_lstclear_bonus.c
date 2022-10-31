/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:25:39 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/30 22:41:41 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*void	del(void *content)
{
	content = NULL;
}*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, (*del));
			*lst = temp;
		}
	}
}
/*int	main(void)
{
	t_list *lst;
	t_list *new;
	t_list *head;
	t_list *temp;

	lst = ft_lstnew(ft_strdup("hello"));
	new = ft_lstnew(ft_strdup("world"));
	head = lst;

	ft_lstadd_back(&lst, new);
	temp = head;
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}

	printf("---------------- \n");

	ft_lstclear(&lst, del);

	temp = head;
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
}*/