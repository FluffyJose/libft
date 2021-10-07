#include "libft.h"

char    *ft_strdup(char *str)
{
    size_t  i;
    size_t  len;
    char    *result;

    i = 0;
    len = ft_strlen(str);
    result = (char*)malloc(sizeof(char)*len + 1);
    result[len] = '\0';

    while (i < len)
    {
        result[i] = str[i];
        i++;
    }
    return (result);
}