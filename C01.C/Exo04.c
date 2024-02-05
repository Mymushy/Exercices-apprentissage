#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a;
    *a = *a / *b;
    *b = temp % *b; 

}

int main()
{

    int a = 23;
    int b = 8;

    ft_ultimate_div_mod(&a, &b);
    printf("QUOTIENT = %d\n", a);
    printf("RESTE = %d\n", b);

return(0);

}