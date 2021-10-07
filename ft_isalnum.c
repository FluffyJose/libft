#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (c);
    return (0);
}

/*
int main(void)
{
    printf("%d\n", ft_isalnum('#'));
    printf("%d\n", isalnum('#'));
    printf("%d\n", ft_isalnum('9'));
    printf("%d\n", isalnum('9'));
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n", isalnum('A'));
    printf("%d\n", ft_isalnum('z'));
    printf("%d\n", isalnum('z'));
    return (0);
}
*/