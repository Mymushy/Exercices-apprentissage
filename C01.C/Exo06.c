#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_strlen(char *str) 
{
int longueur = 0;
    while (*str != '\0') 
    {
        longueur++;
        str++;
    }
    return longueur;
}

int main()
{
    char *str = "Pas facile de tout comprendnre mais ca va";
    printf("Le mot contient = %d\n", ft_strlen(str));
    return(0);
}