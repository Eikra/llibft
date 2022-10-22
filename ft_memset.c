/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:43:42 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/20 21:57:27 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*o_dest;

	if (!b)
		return (NULL);
	o_dest = b;
	while (len > 0)
	{
		*(unsigned char *)b = (unsigned char)c;
		b++;
		len--;
	}
	return (o_dest);
}
/*void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (!b)
		return (NULL);
	while (i <= len)
	{
		(unsigned char *) b[i] = (unsigned char *) c;
		i++;
	}
	return (void *b);
}*/
