#include <stdio.h>

int main() {

    int input;
    
    printf("Digite um número:");
    scanf("%d", &input);
    

    printf("\nO Triplo deste número: %d", (input * 3));
    printf("\nO Quadrado deste número: %d", (input * input));
    printf("\nA Metade deste número: %.2f", (float)input / 2);
    return 0;
}
