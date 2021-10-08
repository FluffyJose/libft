/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreddy <sfreddy@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 22:46:30 by sfreddy           #+#    #+#             */
/*   Updated: 2021/10/08 22:48:14 by sfreddy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	size_t	i;
	size_t	len;
	char	*result;

	i = 0;
	len = ft_strlen(str);
	result = (char *)malloc(sizeof(char) * len + 1);
	result[len] = '\0';
	while (i < len)
	{
		result[i] = str[i];
		i++;
	}
	return (result);
}
