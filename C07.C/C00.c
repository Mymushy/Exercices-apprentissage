#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h> 

char *ft_strdup(char *src)

{
    int i = 0;
    char *chaine;
    int size;

    
    while (src[i] !='\0')
    {
        i++;
    }
    size = i;

    chaine = (char*)malloc((size + 1 ) * sizeof(char));
    
    if (chaine == NULL)
        return NULL;

    int j = 0;

    while (src[j] !='\0')
    {
        chaine[j] = src[j];
        j++;
    }
    chaine[j] = '\0';

    return(chaine);
   
}


int main()
{
    char *src = "ralphlauren";
    printf("Le résultat = %s\n", ft_strdup(src));
    return(0);
    
}    
    
    
    /*
    > BONUS POUR SERVIR DE RAPPEL PLUS TARD --> UTILISATION DE FREE

    char *src = "ralphlauren";
    char *result = ft_strdup(src);
    
    if (result != NULL)
    {
        printf("Le résultat = %s\n", result);
        free(result); // Libérer la mémoire allouée par ft_strdup
    }

    return 0;
    */