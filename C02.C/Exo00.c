#include <stdio.h>
#include <unistd.h> 

char *ft_strcpy(char *dest, char *src)
{
    while (*src != '\0') 
    
    {
        *dest = *src;
        dest++;
        src++;
    
    }
    
    *dest = '\0'; 
    return dest;
    
}

int main()

{
    char src[] = "bishop";
    char dest[30];
    
    ft_strcpy(dest, src); 
    printf("Le final : %s\n", dest); 
   
    return(0);
}