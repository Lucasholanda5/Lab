#include <stdio.h>

int main() {

    int input;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &input);

    printf("\nEm base octal: %o", input);
    printf("\nEm base hexadecimal: %X", input);

    return 0;
}
