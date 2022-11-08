#include "../libft.h"
#include <string.h>
#include <stdio.h>


int main(void)
{
   char **tab = ft_split("tripouille", 0);
   int i = 0;
   int j = 0;
   while (tab[i])
   {
        while(tab[i][j])
        {
            printf("%c", tab[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
   }
   
}