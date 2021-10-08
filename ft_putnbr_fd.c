/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreddy <sfreddy@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:14:28 by sfreddy           #+#    #+#             */
/*   Updated: 2021/10/08 21:15:42 by sfreddy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_char(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		print_char('-', fd);
		print_char('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		print_char('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else
	{
		if (n / 10)
			ft_putnbr_fd(n / 10, fd);
		print_char(n % 10 + '0', fd);
	}
}
