#include <stdio.h>

int main() {

    float c;
    float l;
    float a;

    printf("Informe o comprimento, a largura e a altura: ");
    scanf(" %f %f %f", &c, &l, &a);
    
    printf("\nO volume calculado é: %f", (c * l * a));

    return 0;

}
