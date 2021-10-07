#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
    return (c);
}

// int main(void)
// {
//     printf("%d\n", ft_toupper('0'));
//     printf("%d\n", toupper('0'));
//     printf("%d\n", ft_toupper(97));
//     printf("%d\n", toupper(97));
//     printf("%d\n", ft_toupper('A'));
//     printf("%d\n", toupper('A'));
//     printf("%d\n", ft_toupper('Z'));
//     printf("%d\n", toupper('Z'));
//     return (0);
// }