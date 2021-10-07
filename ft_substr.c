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

char *ft_strdup(char *s)
{
    char    *result;
    int     i;

    result = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
    i = 0;
    while (s[i])
    {
        result[i] = s[i];
        i++;
    }
    result[i] = '\0';
    return (result);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t i;

    substr = NULL;
    i = 0;
    if (!s || len <= 0 || start >= ft_strlen(s))
        return (ft_strdup(""));
    if (ft_strlen(s + start) < len)
        len = ft_strlen(s + start);
    substr = (char *)malloc(sizeof(char) * len + 1);
    while (s[i] && i < len)
        substr[i++] = s[start++];
    substr[i] = '\0';
    return (substr);
}

// int main(void)
// {
//     printf("%s\n", ft_substr("qwerty", 7, 2));
//     return (0);
// }