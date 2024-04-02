#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int a = 0; 
    int b = size - 1; 

    while (a < b)
    {
        
        int temp = tab[a];
        tab[a] = tab[b];
        tab[b] = temp;

        a++;
        b--;

    }

}  
int main()
{
    int tab[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(tab) / sizeof(tab[0]);

    ft_rev_int_tab(tab,size);
    
    int i = 0;
    while (i < size)  
    {   
        printf("%d ", tab[i]);
        i++;
    }

    return 0;
}
