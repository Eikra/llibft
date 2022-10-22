/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:30:16 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/20 21:54:40 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	i = n - 1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n-- > 0)
	{
		d[i] = s[i];
		i--;
	}
	return (dst);
}
