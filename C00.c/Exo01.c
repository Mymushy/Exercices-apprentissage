    
    #include <unistd.h>

void ft_print_alphabet(void) {
    char current_char = 'a';

    while (current_char <= 'z') {
        write(1, &current_char, 1);
        current_char++;
    }
}

int main() {
    ft_print_alphabet();
    write(1, "\n", 1);
    return 0;
}
