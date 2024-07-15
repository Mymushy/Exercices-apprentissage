#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h> 

int *ft_range(int min, int max)
{
    int size;
    int *tab;
    int i = 0;

    if (min >= max)
        return NULL;
    
    
    size = max - min;

    tab = (int*)malloc(size * sizeof(int));
    
    if (tab == NULL)
        return NULL;

    while (min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    return(tab);

}    

int main()
{
    int min = 4;
    int max = 12;
    int *result = ft_range(min, max);
    
    if (result != NULL)
    {
        printf("Le resultat est : result["); // je triche MDR
        int i = 0;
        while (i < (max - min))
        {
            printf("%d", result[i]);
            if (i < (max - min) - 1)
                printf(", ");
            i++;
        }
        
        printf("]\n");
        free(result); // Libérer la mémoire allouée par ft_strdup
    }

    return 0;

}