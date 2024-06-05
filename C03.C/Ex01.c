#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;
    size_t b = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return s1[i] - s2[1];
}


int main()
{
    char *s1 = "Jean";
    char *s2 = "tarte";
    unsigned int n = 30;
    printf("Le résultat = %d\n", ft_strncmp(s1, s2, n));
    return(0);
}