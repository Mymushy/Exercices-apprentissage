#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>


void ft_putstr(char *str)

{
    while (*str !='\0')
    {
        write(1, str, 1);
        str++;
    }
}


int main()
{
    char *str = "Fripouillard";
    ft_putstr(str);
    return(0);
}