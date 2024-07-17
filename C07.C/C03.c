#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h> 

char *ft_strjoin(int size, char **strs, char *sep)

{
    int i = 0;
    int j = 0;
    int k = 0;
    int *chaine;


    chaine = (char*)malloc(sizeof(strs));
    
    if (chaine == NULL)
        return NULL;

    while ( i < size)
    {
        while (strs[i][j] != '\0')
        {
            chaine[k] = strs[i][j];
            k++;
            j++;
        }

    }
    

    chaine[k] = '\0';

    return chaine;

   
}


int main()
{
    char *strs [] = {"Lamine", "YAMAL"};
    char *sep = " ";
    int size = sizeof(*strs);

    printf("Le résultat = %s\n", ft_strjoin(size, strs, sep));
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