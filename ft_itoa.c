/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreddy <sfreddy@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:55:58 by sfreddy           #+#    #+#             */
/*   Updated: 2021/10/08 21:00:40 by sfreddy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return ((unsigned int)(-n));
	return (n);
}

size_t	getlen_number(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	i;

	i = getlen_number(n);
	result = (char *)malloc(sizeof(char) * i + 1);
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	if (!n)
		result[0] = '0';
	result[i] = '\0';
	while (n)
	{
		result[--i] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (result);
}
