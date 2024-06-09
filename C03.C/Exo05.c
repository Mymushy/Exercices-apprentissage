#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>


unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    
}


int main()
{
    char src []= "lafripouille";
    char dest []= "jacques";
    unsigned int size = 30;
    ft_strlcat(dest, src, size); 
    printf("Le final : %s\n", dest); 
   
    return(0);
}