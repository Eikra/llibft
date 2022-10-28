/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:34:07 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/27 23:48:26 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	/*if (!s)
		return (0);*/
	while (s[len] != '\0')
		len++;
	return (len);
}
