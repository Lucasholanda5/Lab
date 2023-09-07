#include <stdio.h>

int main() {
    unsigned long long total_graos = 1,total=1;
    int i;

    for (i = 1; i < 64; i++) {
        total *= 2;
        total_graos += total;
    }

    printf("O total de grãos de trigo no tabuleiro de xadrez é: %llu\n", total_graos);

    return 0;
}
