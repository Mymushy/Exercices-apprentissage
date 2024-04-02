#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int a = 0;  
    while (a < size)
    {
        int b = 0;
        while (b < size)
        {
            if (tab[a] < tab[b])
            {
                int temp = tab[a];
                tab[a] = tab[b];
                tab[b] = temp;
            }

            b++;
        }

        a++;

    }

}  
int main()
{
    int tab[] = {7, 5, 3, 4, 6, 1, 2};
    int size = sizeof(tab) / sizeof(tab[0]);

    ft_sort_int_tab(tab,size);
    
    int i = 0;
    while (i < size)  
    {   
        printf("%d ", tab[i]);
        i++;
    }

    return 0;
}
