#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{   
    size_t i;

    i = 0;
    while (*s++)
        i++;
    return (i);
}
/*
int main(void)
{
    printf("%ld\n", ft_strlen("hello"));
}
*/