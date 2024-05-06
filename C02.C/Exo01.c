#include <stdio.h>
#include <unistd.h> 

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    size_t i = 0;
    
    while (i < n && src[i] != '\0')    
    {
        dest[i] = src[i];
        i++;
    }
    
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
    
}

int main()

{
    char src[] = "Merde au cul";
    char dest[30];
    unsigned int n = 30;
    
    ft_strncpy(dest, src, n); 
    printf("Le final : %s\n", dest); 
   
    return(0);
}