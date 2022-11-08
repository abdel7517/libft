#include "libft.h"
#include <stdio.h>

int ft_count_word(char const *s, char c)
{
    int i;
    int m;

    i = 0;
    m = 0;
    while (s[i])
    {
        if (s[i] == c && s[i-1] != c)
        {
            m++;
        }
        i++;
    }
    if (s[i] == 0 && s[i-1] != c)
        m++;
    return (m);
}

void ft_count_char(char **tab, char  const *s, char c)
{
    int i;
    int l;
    int j;

    j = 0;
    i = 1;
    l = 1;
    while (s[i])
    {
        if(s[i] == c && s[i-1] != c)
        {
            tab[j] = (char *)malloc(sizeof(char) * (l + 1));
            j++;
            l = 0;
            i++;
        }
        if (s[i] != c)
            l++;
        i++;
    }
     if (s[i] == 0 && s[i-1] != c)
        tab[j] = (char *)malloc(sizeof(char) * l+1);
}
char **ft_fill_tab(char **tab, char  const *s, char c)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    while (s[i] == c)
        i++;
    while (s[i])
    {
        if(s[i] == c && s[i+1] != c && s[i+1] != 0)
        {
            tab[j][k] = 0;
            j++;
            k = 0;
            i++; 
        }
        if (s[i] != c)
        {
            tab[j][k] = s[i];
            k++;
        }
        i++;
    }
    tab[j][k] = 0;
    return (tab);
}
char **ft_split(char const *s, char c)
{
    int len;
    char **tab;

    if (s == NULL || s == 0)
        return (NULL);
    len = ft_count_word(s, c);
    tab = (char **)malloc(sizeof(char *) * (len + 1));
    ft_count_char(tab, s, c);
    ft_fill_tab(tab, s, c);
    return (tab);
}
