#include <stdio.h>
#include <stdlib.h>

char *ft_strrchr(const char *s, int c)
{
    char    *tmp;

    tmp = NULL;
    if (!s)
        return (NULL);
    while (*s)
    {
        if (*s == (char)c)
            tmp = (char *)s;
        s++;
    }
    if ((char)c == '\0')
        tmp = (char *)s;
    return (tmp);
}

// int main(void)
// {
//     char *s = "qwerty";
//     int c = 'e';

//     printf("%s\n", ft_strrchr(s, c));
// }