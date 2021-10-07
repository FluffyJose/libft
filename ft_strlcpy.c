#include <stdlib.h>
#include <stdio.h>

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    if (!dst || !src)
        return (0);
    while (src[i] && dst[i] && i < size)
    {   
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (i);
}
/*
int main (void)
{
    char dst[] = "qwerty";
    const char *src = "qwertyu";
    printf("%ld\n", ft_strlcpy(dst, src, 7));
    printf("%s\n", dst);
}
*/