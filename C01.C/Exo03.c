#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{

*div = a / b;
*mod = a % b; 

   
}

int main()
{
    int a = 23;
    int b = 8;
    int quotient;
    int reste; 

    ft_div_mod(a, b, &quotient, &reste);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("quotient = %d\n", quotient); 
    printf("reste = %d\n", reste);

    return(0);

}