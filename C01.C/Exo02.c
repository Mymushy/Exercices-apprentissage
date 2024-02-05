#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main()
{
    int Jean = 5;
    int Maurice = 10;

    int *a = &Jean;
    int *b = &Maurice;
    

    printf("Avant modif : a = %d\n", *a);
    printf("Avant modif : b = %d\n", *b); 

ft_swap(a, b);

    printf("Après modif : a = %d\n", *a);
    printf("Après modif : b = %d\n", *b);

return(0);

}