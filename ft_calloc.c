/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:25:16 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/20 21:47:57 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	t;
	size_t	i;

	if (count > SIZE_MAX / size)
		return (NULL);
	t = size * count;
	i = 0;
	p = malloc(size * count);
	if (!p)
		return (NULL);
	while (t--)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}

/*int	main()
{
	printf("%p\n", ft_calloc(9,9));
	printf("%zu", SIZE_MAX);
}*/
