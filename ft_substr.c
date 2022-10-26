/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:09:00 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/23 05:03:47 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	size_t sub_len;
	char *substr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		if (!(substr = malloc(sizeof(char) * 1)))
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > (ft_strlen(s) - start))
		sub_len = ft_strlen(s) - start;
	if (len <= (ft_strlen(s) - start))
		sub_len = len;
	if (!(substr = (char *)malloc(sub_len + 1)))
		return (NULL);
	i = 0;
	while (i < sub_len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}