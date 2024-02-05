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

ft_swap(a, b);
printf("a = %d\n", *a);
printf("b = %d\n", *b);    
return(0);

}