#include <stdio.h>

int main() {

    float input;

    printf("Insira o valor da conta: ");
    scanf("%f", &input);

    printf("\n\n---------- Conta ----------\n");
    
    printf("Valor da conta: %.2f\n", input);
    printf("Taxa de servico: %.2f\n", (input / 10));
    printf("\nTotal a pagar: %.2f\n", (input + (input / 10)));

    return 0;

}
