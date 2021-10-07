#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

void    ft_lstadd_front(t_list **lst, t_list *new);
t_list  *ft_lstnew(void *content);
size_t  ft_strlen(const char *s);
int     ft_atoi(const char *nptr);
void    ft_bzero(void *s, size_t n);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_lstsize(t_list *lst);
size_t  ft_strlen(const char *s);

#endif