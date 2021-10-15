/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreddy <sfreddy@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:33:13 by sfreddy           #+#    #+#             */
/*   Updated: 2021/10/09 19:38:14 by sfreddy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src1;
	unsigned char	*dest1;

	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (dest1 <= src1)
	{
		while (n--)
			*dest1++ = *src1++;
	}
	else
	{
		src1 = (unsigned char *)src + (n - 1);
		dest1 = (unsigned char *)dest + (n - 1);
		while (n--)
			*dest1-- = *src1--;
	}
	return (dest);
}
