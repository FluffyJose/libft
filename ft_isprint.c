#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
    if (c >= 32 && c <= 127)
        return (1);
    return (0);
}

/*
int main(void)
{
    printf("%d\n", ft_isprint('\n'));
    printf("%d\n", isprint('\n'));
    printf("%d\n", ft_isprint('9'));
    printf("%d\n", isprint('9'));
    printf("%d\n", ft_isprint('A'));
    printf("%d\n", isprint('A'));
    printf("%d\n", ft_isprint('z'));
    printf("%d\n", isprint('z'));
    return (0);
}
*/