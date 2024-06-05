#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;

    while (i < n && s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        i++;
        if ( i == n )
        {
            return 0;
        }
        else
        {
            return s1[i] - s2[i];     
        }
    }
}


int main()
{
    char *s1 = "petard";
    char *s2 = "tagranmere";
    unsigned int n = 30;
    printf("Le résultat = %d\n", ft_strncmp(s1, s2, n));
    return(0);
}