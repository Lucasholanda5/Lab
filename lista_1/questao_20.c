#include <stdio.h>

int main() {
    
    int input;

    printf("Digite um numero inteiro: ");
    scanf("%d", &input);

    (input % 2) ? printf("\n\"Valor impar.\"") : printf("\n\"Valor par.\"");

    return 0;

}
