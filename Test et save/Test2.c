#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>


int ft_atoi(char *str)

{
    int i = 0;
    int signe = 1;
    int final = 0;

   
    
    while (str[i] != '\0' && str[i] == ' ')
        i++;

    while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
    {
        if(str[i] == '-')
        {
            signe = signe * -1;
        }
        i++;
    }
    
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        final = final * 10 + str[i] - '0';
        i++;
    } 
    
    return signe * final;

}


int main()
{
    char str[] = "    ---+--+1234ab567";
    printf("Résultat : %d\n", ft_atoi(str));
    return(0);
}