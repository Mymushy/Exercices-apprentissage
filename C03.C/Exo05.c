#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>


unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i = 0;
    int size_dest = 0;
    int size_src = 0;

    while (dest[size_dest] != '\0')
    {
        size_dest++;
    }
    while(src[size_src] != '\0')
    {
        size_src++;
    }
    if (size_dest >= size) 
    {
        return size + size_src;
    }
    int place = size - 1;
    
    while (i + size_dest < place && src[i] != '\0')
    {
        dest[size_dest + i] = src[i];
        i++;
    }
    
    dest[size_dest + i] = '\0';
    return size_dest + size_src;
}


int main()
{
    char src []= "BELMONDO";
    char dest [50]= "JeanPaul";
    unsigned int size = 16;
    printf("Le final : %d\n", ft_strlcat(dest, src, size));
    printf("Le mélange : %s\n", dest); 
   
    return(0);
}