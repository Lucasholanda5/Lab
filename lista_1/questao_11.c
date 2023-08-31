#include <stdio.h>

int main() {

    float d;
    float r;

    printf("Informe a cotacao do dolar atual: ");
    scanf("%f", &d);
    
    printf("\nInsira a quantidade a converter: R$");
    scanf("%f", &r);

    printf("\nValor em dolar: $%f", r / d);


    return 0;

}
