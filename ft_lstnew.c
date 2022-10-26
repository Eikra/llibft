/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:20:21 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/26 00:36:36 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *frst_list;

	if (!(frst_list = malloc(sizeof(t_list))))
		return (NULL);
	frst_list->content = content;
	frst_list->next = NULL;
	return (frst_list);
}