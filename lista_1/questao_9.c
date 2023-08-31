#include <stdio.h>

int main() {

    int input;

    printf("Digite um inteiro: ");
    scanf("%d", &input);
    
    printf("\nO antecessor é: %d", input, (input - 1));
    printf("\nO sucessor é: %d", input, (input + 1));

    return 0;

}
