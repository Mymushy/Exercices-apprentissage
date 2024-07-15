#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h> 

int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int *tab;
    int i = 0;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
        
    
    size = max - min;

    tab = (int*)malloc(size * sizeof(int));
    
    if (tab == NULL)
    {
        *range = NULL;  
        return (-1);
    }

    while (min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    
    *range = tab;
    return (i);

}    

int main()
{
    int min = 0;
    int max = 12;
    int *range;

    int size = ft_ultimate_range(&range, min, max);
    
    if (range != NULL)
    {
        printf("Le resultat est : "); 
        int i = 0;
        while (i < size)
        {
            printf("%d ", range[i]);
            i++;
        }
        
        printf("\n");
        free(range); // Libérer la mémoire allouée par ft_strdup
    }

    return 0;

}