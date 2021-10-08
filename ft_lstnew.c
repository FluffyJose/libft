/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreddy <sfreddy@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 23:31:32 by sfreddy           #+#    #+#             */
/*   Updated: 2021/10/08 23:33:35 by sfreddy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

// int main(void)
// {
//     t_list *p, *q, *t;
//     char *c = "qwerty";
//     int n = 42;
//     char r = 'r';

//     p = ft_lstnew(c);
//     q = ft_lstnew(&n);
//     t = ft_lstnew(&r);

//     ft_lstadd_front(&p, q);
//     ft_lstadd_front(&q, t);

//     // printf("%c\n", *((char *)t->content));
//     // printf("%d\n", *((int *)t->next->content));
//     // printf("%s\n", (char *)t->next->next->content);
//     // printf("%d\n", ft_lstsize(t)); 
//     return (0);
// }