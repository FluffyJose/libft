#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        return (c + 32);
    return (c);
}

// int main(void)
// {
//     printf("%d\n", ft_tolower('0'));
//     printf("%d\n", tolower('0'));
//     printf("%d\n", ft_tolower(97));
//     printf("%d\n", tolower(97));
//     printf("%d\n", ft_tolower('A'));
//     printf("%d\n", tolower('A'));
//     printf("%d\n", ft_tolower('Z'));
//     printf("%d\n", tolower('Z'));
//     return (0);
// }