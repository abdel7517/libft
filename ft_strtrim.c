#include "libft.h"
#include <stdio.h>

static void ft_find_set_end(char *s1, char const *set, int *i)
{
    int j;

    j = 0;
	while (set[j])
    {
        if (set[j] == s1[*i] && *i >= 0)
        {
           *i= *i-1;
           j = -1;
        }
        j++;
    }
}

static void ft_find_set_start(char *s1, char const *set, int *i)
{
    int j;

    j = 0;
	while (set[j])
    {
        if (set[j] == s1[*i])
        {
            *i= *i+1;
            j = -1;
        }
        j++;;
    }
}

static char *ft_check_end(char *s1, char const *set)
{
    int j;
    int i;
    char *str;

    j = 0;
    i = ft_strlen(s1)-1;
    str = 0;
    ft_find_set_end(s1, set, &i);
    if (i < (int)(ft_strlen(s1)-1))
    {
         str = (char *)malloc(sizeof(char) * (i+1));
            if (str == NULL)
                return (NULL);
            str[++i] = 0;
            while (i > 0)
            {
				i--;
                str[i] = s1[i];
            }
			free(s1);
            return (str);
    }
    return (s1);
}

static char *ft_check(char *s1, char const *set)
{
    int j;
    int i;
    char *str;

    j = 0;
    i = 0;
    str = 0;
    ft_find_set_start(s1, set, &i);
    if (i > 0)
    {
        str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - i + 1 ));
        if (str == NULL)
            return (NULL);
        j = 0;
        while (s1[i])
        {
            str[j] = s1[i];
            j++;
            i++;
        }
        str[j] = 0;
		free(s1);
        return (ft_check_end(str, set));
    }
    return (ft_check_end(s1 , set));
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *s1b;
    int i;

    i = -1;
    s1b = (char *)malloc( sizeof(char) * (ft_strlen(s1) + 1) );
    while (s1[++i])
        s1b[i] = s1[i];
    s1b[i] = 0;
    return (ft_check(s1b, set));
}
