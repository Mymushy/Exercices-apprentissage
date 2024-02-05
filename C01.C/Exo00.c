#include <stdio.h>

void ft_ft(int *ptr){

    int Jean = 42;  
    *ptr = Jean; 
}

int main()
{
int ptr;
ft_ft(&ptr);
printf("ptr = %d\n", ptr);  

return(0);

}