/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:18:47 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/21 18:28:07 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*c;

	c = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	i = 0;
	j = 0;
	while (s1[i])
	{
		c[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		c[j] = s2[i];
		j++;
		i++;
	}
	c[j] = '\0';
	return (c);
}
