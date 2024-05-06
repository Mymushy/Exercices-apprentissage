#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>

int ft_str_is_uppercase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if  (!((str[i] >= 'A') && (str[i] <= 'Z')))
            return 0;   
        else 
            i++; 
    }
    return 1; 
}

int main()
{
    char str[] = "TRACTION";
    if (ft_str_is_uppercase(str))
    {
        write(1, "1", 1);
    } 
    else 
    { 
        write(1, "0", 1);
    }  
    
    return 0;
}