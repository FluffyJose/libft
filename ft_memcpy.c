/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreddy <sfreddy@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:04:30 by sfreddy           #+#    #+#             */
/*   Updated: 2021/10/08 21:06:07 by sfreddy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;

	dest1 = (unsigned char *) dest;
	src1 = (unsigned char *) src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		*dest1++ = *src1++;
	return (dest);
}
