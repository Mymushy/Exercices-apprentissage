#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>


int ft_strlen(char *str)

{
    int i = 0;

    while (*str !='\0')
    {
        i++;
        str++;
    }
    return i;
}


int main()
{
    char *str = "Allixavec2L";
    printf("Le résultat = %d\n", ft_strlen(str));
    return(0);
}