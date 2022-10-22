/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:12:53 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/21 19:29:54 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;

	n_len = ft_strlen(needle);
	i = 0;
	if (!needle[0])
		return ((char *)"");
	while ((char )haystack[i] && i < len)
	{
		j = 0;
		if ((char )haystack[i + j] == needle[j])
		{
			while ((char)haystack[i + j] == needle[j] && i + j < len)
			{
				j++;
			}
			if (needle[j] == '\0')
			{
				return ((char *)(haystack + i));
			}
		}
		i++;
	}
	return (NULL);
}
/*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*str;

	str = (char *)haystack;
	n_len = ft_strlen(needle);
	i = 0;
	if (!needle[0])
		return ((char *)"");
	while (str[i] && i < len)
	{
		j = 0;
		if (str[i + j] == needle[j])
		{
			while (str[i + j] == needle[j] && j < n_len && (i + j) < len)
			{
				j++;
			}
			if (needle[j] == '\0')
			{
				return (str + i);
			}
		}
		i++;
	}
	return (NULL);
}*/
/*if(!needle)
        return ((char*)haystack);*/
/*if (!ft_isprint(needle[i]))
	 	return((char*)"");*/
/*#include<string.h>

int main()
{
    printf("%s\n", ft_strnstr(NULL, NULL, 3));
}*/
