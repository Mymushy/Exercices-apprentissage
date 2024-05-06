#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while (str[i] != '\0') 
    {
        if  (!((str[i] >= 'a') && (str[i] <= 'z')))
            return 0;   
        else 
            i++; 
    }
    return 1; 
}

int main()
{
    char str[] = "traction";
    if (ft_str_is_lowercase(str))
    {
        write(1, "1", 1);
    } 
    else 
    { 
        write(1, "0", 1);
    }  
    
    return 0;
}