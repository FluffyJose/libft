#include <stdio.h>
#include <stdlib.h>

size_t char_count(char *word, char c)
{
    size_t len;

    len = 0;
    while (*word != c && *word)
    {
        word++;
        len++;
    }
    return (len);
}

size_t word_counter(char *str, char c)
{
    size_t  count_words;

    count_words = 0;
    while (*str == c)
        str++;
    while (*str)
    { 
        count_words++;
        while (*str != c && *str)
            str++;
        while (*str == c && *str)
            str++;
    }
    return (count_words);
}

char    *word_dup(char *str, char c)
{
    size_t  i;
    size_t  len;
    char    *result;

    i = 0;
    len = char_count(str, c);
    result = (char*)malloc(sizeof(char)*len + 1);
    result[len] = '\0';

    while (i < len)
    {
        result[i] = str[i];
        i++;
    }
    return (result);
}

void    array_filler(char **arr, char *substr, char c)
{
    size_t  i;

    i = 0;
    while (*substr == c && *substr)
        substr++;
    while (*substr)
    {
        arr[i] = word_dup(substr, c);
        i++;
        while (*substr != c && *substr)
            substr++;
        while (*substr == c && *substr)
            substr++;
    }
}

char    **ft_split(char const *s, char c)
{
    size_t  wc;
    char    **arr;
    char    *temp;

    temp = (char *)s;
    wc = word_counter(temp, c);
    arr = (char **)malloc(sizeof(char*) * wc + 1);
    arr[wc] = NULL;
    array_filler(arr, temp, c);
    return (arr);
}

// int main(void)
// {
//     char arr[] = "Hello Privet       Test    Soloma Sex";
//     size_t i = 0;
//     char **result = ft_split(arr, 'j');
//     while (result[i] != NULL)
//         printf("%s\n", result[i++]);

//     // printf("%lu\n", char_count("qwerty ",  ' '));
//     // char *c = "qwerty ";
//     // char s = ' ';
//     // printf("%s\n", word_dup(c, s));
//     // printf("%lu\n", word_counter("qwerty", 'r'));
//     return (0);
// }