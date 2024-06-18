#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char current_char = 'z';

    while (current_char >= 'a')
    {
        write(1, &current_char, 1);
        current_char--;
    }

}

int main()
{
    ft_print_reverse_alphabet();
    return 0;
}

