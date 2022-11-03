/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:25:16 by iecharak          #+#    #+#             */
/*   Updated: 2022/11/03 18:54:30 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	t;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	p = malloc(size * count);
	if (!p)
		return (NULL);
	t = size * count;
	return (ft_memset(p, 0, t));
}

/*int	main(void)
{
	printf("%p\n", ft_calloc(9,9));
	printf("%zu", SIZE_MAX);
}*/
