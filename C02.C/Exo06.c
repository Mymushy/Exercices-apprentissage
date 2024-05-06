#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>

int ft_str_is_printable(char *str)
{
    int i = 0;
    while (str[i] != '\0') 
    {
        if (str[i] < 32 || str[i] > 126)
            return 0;   
        else 
            i++; 
    }
    return 1; 
}

int main()
{
    char str[] = "Traction\nazer";
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