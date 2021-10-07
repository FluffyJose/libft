#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (c);
    return (0);
}

/*
int main(void)
{
    printf("%d\n", ft_isdigit('0'));
    printf("%d\n", isdigit('0'));
    printf("%d\n", ft_isdigit('9'));
    printf("%d\n", isdigit('9'));
    printf("%d\n", ft_isdigit('A'));
    printf("%d\n", isdigit('A'));
    printf("%d\n", ft_isdigit('z'));
    printf("%d\n", isdigit('z'));
    return (0);
}
*/
