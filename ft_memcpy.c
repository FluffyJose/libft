#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dest1;
    unsigned char *src1;

    dest1 = (unsigned char *) dest;
    src1 = (unsigned char *) src;

    if (!n || dest == src)
        return (dest);
    while (n--)
        *dest1++ = *src1++;
    return (dest);
}

// int main(void)
// {
//     int dest = 42;
//     int src = 552;
//     printf("%d\n", dest);
//     ft_memcpy(&dest, &src, 2);
//     printf("%d\n", dest);
//     // printf("%d\n", );
// }