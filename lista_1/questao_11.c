#include <stdio.h>

int main() {

    float dolar;
    float qntdReais;

    printf("Insira a cotacao do dolar atual: $");
    scanf("%f", &dolar);
    
    printf("\nInsira a quantidade em R$ (Reais) a converter: R$");
    scanf("%f", &qntdReais);

    printf("\nValor em dolar: $%f", qntdReais / dolar);


    return 0;

}
