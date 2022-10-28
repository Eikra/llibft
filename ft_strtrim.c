/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:41:25 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/28 14:43:43 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_in_set(char const *set, int c)
{
    int i;
    i = 0;
    while(set[i])
    {
        if (set[i] == c)
            return(1);
        i++;
    }
    return (0);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    char *strtrim;
    size_t  strt;
    size_t  end;
    size_t  i;
    size_t  n_len;

    i = 0;
    end = ft_strlen(s1)-1;
    if (!s1 || !set)
        return (NULL);
    while (s1[i] && is_in_set(set, s1[i]) && i <= end)
    {
        i++;
    }
    strt = i;
    
    while (s1[end] && is_in_set(set, s1[end]) && end >= 0)
    {
            end--;
    }
    if (strt == end)
        n_len = 2;
    else 
        n_len = end - strt + 2;
    ft_strlcpy(strtrim, s1 + strt, n_len);
    return (strtrim);
}