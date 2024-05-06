#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>

int ft_str_is_printable(char *str)
{
    
    while (*str)
    {
        if (*str < 32 || *str > 126)
            return 0;   
        else 
            str++; 
    }
    return 1; 
}

int main()
{
    char str[] = "Traction\nBajam";
    if (ft_str_is_printable(str))
    {
        write(1, "1", 1);
    } 
    else 
    { 
        write(1, "0", 1);
    }  
    
    return 0;
}