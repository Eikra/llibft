/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:37:39 by iecharak          #+#    #+#             */
/*   Updated: 2022/10/22 12:48:44 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*#include <stdio.h> 
#include <fcntl.h>
int main()
{
  int fd = open("ikrame", O_RDWR | O_CREAT, 0777);
ft_putstr_fd("echaraki", fd);
close (fd);
printf("Done");
}
int	main()
{
	int	fd;

	fd = fopen ("tkharbi9", "w");
	ft_putstr_fd("dhduhisu", fd);
	fclose(fd);
	ft_putstr_fd("Done", 4);
}*/
