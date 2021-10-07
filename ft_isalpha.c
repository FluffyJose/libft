#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (c);
    return (0);
}
/*
int main(void)
{
    printf("%d\n", ft_isalpha('a'));
    printf("%d\n", isalpha('a'));
    printf("%d\n", ft_isalpha('z'));
    printf("%d\n", isalpha('z'));
    printf("%d\n", ft_isalpha('A'));
    printf("%d\n", isalpha('A'));
    printf("%d\n", ft_isalpha('Z'));
    printf("%d\n", isalpha('Z'));
    return (0);
}
*/