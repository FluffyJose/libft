#include <stdio.h>
#include <stdlib.h>

char *ft_strchr(const char *s, int c)
{
    if (!s)
        return (NULL);
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if ((char)c == '\0')
        return ((char *)s);
    return (NULL);
}

// int main(void)
// {
//     char *s = "qwerty";
//     int c = 'f';

//     printf("%s\n", (char *)NULL);
// }