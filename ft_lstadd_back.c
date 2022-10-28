/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:31:40 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/27 17:05:28 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
	{
		ft_lstlast(*lst)->next = new;
		//new->next = NULL;
	}
	else
		*lst = new;
}
/*int	main(void)
{
	t_list *lst;
	t_list *new;

	lst = ft_lstnew("wold");
	new = ft_lstnew("hello");
	ft_lstadd_back(&lst, new);
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
}*/