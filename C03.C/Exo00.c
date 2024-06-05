#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>


int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return s1[i] - s2[i];
}


int main()
{
    char *s1 = "Jea";
    char *s2 = "tarte";
    printf("Le résultat = %d\n", ft_strcmp(s1, s2));
    return(0);
}