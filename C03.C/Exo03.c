#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>


char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;
    int j = 0;

    while (i < nb && dest[i] != '\0')
    {
        i++;
    }
    while(j < nb && src[j] != '\0')
    {
        dest[i+j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return dest;
}


int main()
{
    char src []= "lafripouille";
    char dest []= "jacques";
    unsigned int nb = 30;
    ft_strncat(dest, src, nb); 
    printf("Le final : %s\n", dest); 
   
    return(0);
}