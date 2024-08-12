#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h> 


int count_words(const char *str, const char *charset) 
{
    int i = 0;
    int j = 0;
    int nbwrd = 0;
    int inout = 0;    
    

    while (str[i] != '\0')
    {   
        j = 0;
        int delim = 0;

        while (charset[j] != '\0')
        {
            if(str[i] == charset[j])
                delim = 1;

            j++;
        }

        if (delim == 1)
            inout = 0;
        else if (inout == 0)
        {
            nbwrd++;
            inout = 1;
        }

        i++;
    }

    return nbwrd;
}

char **ft_split(char *str, char *charset)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int deb = 0;
    int fin = 0;
    int nbword = count_words(str, charset);
        
    
    char **chaine = (char**)malloc((nbword + 1 ) * sizeof(char*));

   if (chaine == NULL)
        return NULL;

    while (str[i] != '\0')
    {
        while (str[i] != '\0')
        {   
            j = 0;
            int delim = 0;

            while (charset[j] != '\0')
            {
                if(str[i] == charset[j])
                    delim = 1;

                j++;
            }
            if (delim == 0)
                break;

            i++;
        }
        deb = i;

        while (str[i] != '\0')
        {   
            j = 0;
            int delim = 0;

            while (charset[j] != '\0')
            {
                if(str[i] == charset[j])
                    delim = 1;

                j++;
            }
            if (delim == 1)
                break;

            i++;
        }
        fin = i;

      

        if (deb < fin)
        {
            int taille = fin - deb;
            char *mot = (char *)malloc ((taille +1) * sizeof(char));
            if (mot == NULL)

            if (chaine[k] == NULL)
            {
                int l = 0;
                while (l < k)
                {
                    free(chaine[l]);
                    l++;
                }
                free(chaine);
                return NULL;
            }
            
            int m = 0;
            while (m < taille)
            {
                mot[m] = str[deb + m];
                m++;
            }
            
            mot[taille] = '\0';

            chaine[k] = mot;
            k++;
        }
    }

    chaine[k] = NULL; 

    return chaine;
    
}

int main() {
    char *str = "La! voisine, est fraiche";
    char *charset = " ,-.!?";

    char **result = ft_split(str, charset);

    int i = 0;

    while (result[i] != NULL) 
    {
        printf("Le mot est : %s\n", result[i]);
        free(result[i]);
        i++;
    }

    free(result); 

    return 0;
} 