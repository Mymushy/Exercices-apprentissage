#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>


char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0')
    {
        dest[i+j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return dest;
}


int main()
{
    char src []= "loubard";
    char dest [30]= "petit";
    ft_strcat(dest, src); 
    printf("Le final : %s\n", dest); 
   
    return(0);
}