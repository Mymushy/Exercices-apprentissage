#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;
    while (str[i])
    {
        if  (!((str[i] >= '0') && (str[i] <= '9')))
            return 0;   
        else 
            i++; 
    }
    return 1; 
}

int main()
{
    char str[] = "";
    if (ft_str_is_numeric(str))
    {
        write(1, "1", 1);
    } 
    else 
    { 
        write(1, "0", 1);
    }  
    
    return 0;
}