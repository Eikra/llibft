/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:15:43 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/28 11:54:19 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
	free(content);
}*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del && lst)
	{
		del(lst->content);
		free(lst);
	}
}
/*int	main(void)
{
	t_list	*head;

	head = ft_lstnew(ft_strdup("wold"));
	printf("%s\n", head->content);
	ft_lstdelone(head, del);
	printf("%s", head->content);
}*/
/*int	main(void)
{
	t_list *lst;
	t_list *new;
	t_list *head;
	t_list *temp;

	lst = ft_lstnew(ft_strdup("wold"));
	new = ft_lstnew(ft_strdup("5456"));
	head = lst;

	ft_lstadd_front(&head, new);
	temp = head;
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}

	printf("---------------- \n");

	ft_lstdelone(new, del);

	temp = head;
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
}*/