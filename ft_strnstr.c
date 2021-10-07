#include "libft.h"
#include <stdio.h>
#include <string.h>

char * ft_strnstr (const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  l;

    i = 0;
    l = ft_strlen(little);
    if (l == 0)
        return (big);
    if (len == 0)
        return (NULL);
    while (big[i] != little[0] && big[i])
        i++;
    

}