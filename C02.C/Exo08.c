#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>

char *ft_strlowcase(char *str)
{
    int i = 0;
    while (str[i] != '\0') 
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;   
        else 
            i++; 
    }
    return 0; 
}

int main()
{
    char str[] = "V Rising CeSt CooL";
    ft_strlowcase(str);
    printf("Le mot devient = %s\n", str);
    return(0);
}