#include <unistd.h>

void ft_print_comb(void){
    char chiffre = '0';

    while ( chiffre <= '789' ) {
        write(1, &chiffre, 1);
        chiffre++;
    }
}
    

int main() {
    void ft_print_comb(void);
    return 0;
}