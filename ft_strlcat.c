/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreddy <sfreddy@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 22:54:48 by sfreddy           #+#    #+#             */
/*   Updated: 2021/10/13 23:45:52 by sfreddy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	j = dstlen;
	if (dstlen < size - 1 && size > 0)
	{
		while (src[i] && dstlen + i < size - 1)
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	if (dstlen > size)
		dstlen = size;
	return (dstlen + srclen);
}
