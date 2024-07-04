#include <unistd.h>
#include <string.h>


int ft_strcmp(char *a, char *b)
{
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i])
    {
        i++;
    }
    return a[i] - b[i];
}


int main(int argc, char *argv[])
{ 

    if (argc > 1)
    {   
        int j = 1;

        while (j < argc - 1 )
        {
            int s = 1;
            
            while(s < argc - 1)
            {
    
                if ((ft_strcmp(argv[s], argv[s + 1]) > 0))
                {
                    char *temp = argv[s];
                    argv[s] = argv[s + 1];
                    argv[s + 1] = temp;
                }
                s++;
            }  
            j++;
        }      
            
        int k = 1;
        while (argc > k)
        {   
            int i = 0;

            while (argv[k][i] != '\0')
            {
                write(1, &argv[k][i], 1);
                i++;
        
            }

            k++;
            write(1, "\n", 1);

        }
        
        write(1, "\n", 1);
        
    }
    
    return 0;

}