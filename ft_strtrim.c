/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:41:25 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/22 22:04:20 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_start_index(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static int	get_end_index(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	i = ft_strlen(s1) - 1;
	j = 0;
	while (i > 0 && set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int k;
	char *cpy;
	int start;
	int end;
	int size;

	if (!s1)
		return (NULL);
	k = 0;
	start = get_start_index(s1, set);
	end = get_end_index(s1, set);
	if (end > start)
		size = end - start + 1;
	else
		size = 0;
	cpy = malloc(size + 1);
	if (!cpy)
		return (0);
	while (start <= end)
		cpy[k++] = s1[start++];
	cpy[k] = '\0';
	return (cpy);
}