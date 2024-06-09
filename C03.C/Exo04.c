#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>


char *ft_strstr(char *str, char *to_find)
{ 
    int i = 0;
    int j = 0;
    
    if (to_find[0] == '\0')
    {
        return str;
    }
    
    while (str[i] != '\0') 
    {
        if(str[i+j] == to_find[j])
        {
            while (to_find[j]!= '\0' && str[i+j] == to_find[j])
            {
                j++;
            }
            if (to_find[j] == '\0')
            {
                str[i+j] = '\0';
                return &str[i];
            }
        }
        i++;
    }

    return 0;
}


int main()
{
    char str []= "Jean DUJARDIN est un acteur de cinéma talentueux";
    char to_find []= "acteur de cinéma";
    printf("Le final : %s\n", ft_strstr(str, to_find)); 
   
    return(0);
}