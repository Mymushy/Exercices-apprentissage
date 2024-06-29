#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>


int ft_atoi(char *str)

{
    int i = 0;
    int signe = 1;

    while (str[i] != '\0') 
    {
        while (str[i] == ' ') 
        {
            i++;
        }

        while (str[i] == '-')
        {
            signe = -1;
            i++;
            while (str[i] == '-')
            {
                i++;
            }  
        }

        if (str[i] == '+')
        {
            signe = 1;
            i++;
            while (str[i] == '+')
            {
                i++;
            }
        }


        if (((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z')))
        {
            return ' ';
        }

        write(1, &str[i], 1);
        i++;
                   
    }

}


int main()
{
    char str[] = "         --+--+1234ab567";
    ft_atoi(str);
    return(0);
}