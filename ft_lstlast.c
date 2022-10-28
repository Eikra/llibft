/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 05:01:41 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/28 14:09:55 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
/*
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}*/
/*int	main(void)
{
	t_list *frst;
	t_list *scnd;
	t_list *thrd;

	frst = ft_lstnew("hello");
	scnd = ft_lstnew("wold");
	thrd = ft_lstnew("hi");
	ft_lstadd_front(&thrd, scnd);
	ft_lstadd_front(&scnd, frst);
	printf("%s", ft_lstlast(frst)->content);
}*/