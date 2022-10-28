/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 04:43:51 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/27 16:28:02 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*ptr;

	size = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	return (size);
}
/*int	main(void)
{
	t_list	*frst;
	t_list	*scnd;
	t_list	*thrd;

	frst = ft_lstnew("hello");
	scnd = ft_lstnew("wold");
	thrd = ft_lstnew("hi");
	ft_lstadd_front(&thrd, scnd);
	ft_lstadd_front(&scnd, frst);
	printf("%d", ft_lstsize(frst));
}*/
