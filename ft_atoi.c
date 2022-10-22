/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:55:06 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/20 21:40:43 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	rslt;
	int	sign;

	rslt = 0;
	sign = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\v' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = rslt * 10 + str[i] - 48;
		i++;
	}
	rslt *= sign;
	return (rslt);
}
