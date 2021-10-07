#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

/*
int main(void)
{
    printf("%d\n", ft_isascii('0'));
    printf("%d\n", isascii('0'));
    printf("%d\n", ft_isascii('9'));
    printf("%d\n", isascii('9'));
    printf("%d\n", ft_isascii('A'));
    printf("%d\n", isascii('A'));
    printf("%d\n", ft_isascii('z'));
    printf("%d\n", isascii('z'));
    return (0);
}
*/