#include <stdio.h>
#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    unsigned char *p = (unsigned char *) s;
    while (i < n)
        p[i++] = 0;
}
/*
int main(void)
{
    // char *s = "qwer";
    int i = 42;
    int j = 42;
    int *p = &i;
    int *p1 = &j;

    // printf("%d\n", i);
    ft_bzero(p, 4);
    bzero(p1, 4);
    printf("My func: %d\n", i);
    printf("Original bzero: %d\n", j);
}
*/