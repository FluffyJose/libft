#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    unsigned char *p = (unsigned char *) s;
    while (i < n)
        p[i++] = c;
    return (s);
}

// int main(void)
// {
//     int i = 768;
//     int j = 768;
//     int *p = &i;
//     int *p1 = &j;

//     // printf("%d\n", i);
//     ft_memset(p, 2, 2);
//     printf("My func: %d\n", i);
//     memset(p1, 2, 2);
//     printf("Original memset: %d\n", j);
// }