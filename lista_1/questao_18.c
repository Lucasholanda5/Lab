#include <stdio.h>

int main() {

    float raio;
    float pi = 3.14159;

    printf("Digite o raio da circuferencia: ");
    scanf("%f", &raio);

    printf("\n\nDiametro: %.6f", (raio * 2));
    printf("\n\nCircunferencia: %.6f", (2 * pi * raio));
    printf("\n\nArea: %.6f", (pi * raio * raio));

    return 0; 

}
