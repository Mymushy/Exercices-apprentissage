#include <unistd.h>

int main(int argc, char *argv[])
{
    int j = 1;
    

    while (argc > j)
    {   
        int i = 0;

        while (argv[j][i] != '\0')
        {
            write(1, &argv[j][i], 1);
            i++;
            
        }

        j++;
        write(1, "\n", 1);
        
    }
    
    return 0;

}