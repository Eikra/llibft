/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 02:12:15 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/27 17:05:18 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
int	main(void)
{
	t_list *new;
	t_list *lst;

	new = ft_lstnew("hello");
	lst = ft_lstnew("wold");
	ft_lstadd_front(&lst, new);
	printf("%s\n", new->content);
	printf("%s\n", new->next->content);
}*/