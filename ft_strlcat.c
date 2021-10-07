#include <stdlib.h>
#include <stdio.h>

size_t ft_strlcat (char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (!dst || !src)
        return (0);
    while (dst[i])
        i++;
    while (src[j] && j < size)
        dst[i++] = src[j++];
    dst[i] = '\0';
    return (j);
}
/*
int main (void)
{
    char dst[111] = "qwerty";
    const char *src = "qwertyu";
    printf("%ld\n", ft_strlcat(dst, src, 7));
    printf("%s\n", dst);
}
*/