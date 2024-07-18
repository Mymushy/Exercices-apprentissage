#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h> 

char *ft_strjoin(int size, char **strs, char *sep)

{
    int i = 0;
    int j = 0;
    int k = 0;
    int st1 = 0;
    int st2 = 0;
    int sizetot;

    if (size == 0)
    {   
        char *cVidefrère = (char*)malloc(1);
        
        if(cVidefrère == NULL)
            return NULL;
        
        cVidefrère[0]= '\0';
        return cVidefrère;
    }
    
    while (sep[st2] != '\0')
        st2++;
    
    while ( i < size)
    {
        int j = 0;
        while (strs[i][j] != '\0')
        {
            j++;
            st1++;
        }

        i++;
        
    }
    
    sizetot = st1 + st2;

    char *chaine = (char*)malloc((sizetot + 1 ) * sizeof(char));
    
    if (chaine == NULL)
        return NULL;

    i = 0;

    while ( i < size)
    {
        j = 0;

        while (strs[i][j] != '\0')
        {
            chaine[k] = strs[i][j];
            k++;
            j++;
        }

        if (i < size - 1)
        {
            j = 0;

            while (sep[j] != '\0') 
            {
                chaine[k] = sep[j];
                k++;
                j++;
            }
        }
    
        i++;
    }
    

    chaine[k] = '\0';

    return chaine;

   
}


int main()
{
    char *strs [] = {"Lamine", "YAMAL"};
    char *sep = " ";
    int size = sizeof(strs) / sizeof(strs[0]);
   
    
    char *result = ft_strjoin(size, strs, sep);
    if (result != NULL)
    {
        printf("Le résultat = %s\n", result);
        free(result); 
    }
    return(0);
}    