#include <stdio.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *result;
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (!s1 || !s2)
        return NULL;
    result = (char *)malloc(sizeof(char)*(ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!result)
        return NULL;
    while (s1[i])
        {
            result[i] = s1[i];
            i++;
        }
    while (s2[j])
        result[i++] = s2[j++];
    result[i] = '\0';
    return (result);
}

// int main(void)
// {
//     // char *s1 = "qwe";
//     char *s2 = "rty";
//     // printf("%s\n", ft_strjoin(NULL, s2));
//     ft_strjoin(NULL, s2);
//     return (0);
// }