#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>
#include <string.h>
#include <limits.h>


void ft_putnbr(int nb)
{
    int c;
    int dernier;
    int i = 0;
    int tableau[30];


    if (nb == INT_MIN)
    {
        while(i < 12 )
        {
            c = "-2147483648\n"[i];
            write(1, &c, 1);
            i++;
        }
        return;
    }
    
    if (nb >= 0 && nb <= 9)
    {
        c = nb + '0';
        write(1, &c, 1);
    }
    else if (nb > 9)
    {
        while( nb > 9)    
        {
            dernier = nb %10;
            tableau[i++] = dernier + '0';
            nb = nb / 10;
        }
        tableau[i++] = nb + '0';

        while (i > 0)
        {
            write(1, &tableau[--i], 1);
        }
    }

    if (nb < 0 && nb >= -9)
    {
        write(1, "-",1);
        c = (nb * (-1)) + '0';
        write(1, &c, 1);
    }

    else if (nb < -9)
    {
        nb = nb * (-1);
        write(1, "-",1);
        while( nb > 9)    
        {
            
            dernier = nb %10;
            tableau[i++] = dernier + '0';
            nb = nb / 10;
        }
        tableau[i++] = nb + '0';

        while (i > 0)
        {
            write(1, &tableau[--i], 1);
        }
    }


    write(1, "\n", 1);
    
}


int main()
{
    ft_putnbr(INT_MIN);

    ft_putnbr(5);

    ft_putnbr(53);

    ft_putnbr(530);

    ft_putnbr(0);

    ft_putnbr(-2);

    ft_putnbr(-23);
    
    ft_putnbr(-234);
    
    ft_putnbr(-2347);

    return(0);
}