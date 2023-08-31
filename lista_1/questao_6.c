#include <stdio.h>

int main() {

    char sexo;
    float altura;
    float peso;
    
    printf("Insira seu sexo (M/F) e altura em metros Ex:(M 1.90): ");
    scanf(" %c %f", &sexo, &altura);
    
    if (sexo == 'M') {

        peso = 72.7 * altura - 58;

    } else if (sexo == 'F') {

        peso = 62.1 * altura - 44.7;     
    
	} else {

        printf("\nDados inseridos incorretamente.");
        return 1;
    }
    
    printf("\nSeu peso ideal: %.2f", peso);

    return 0;

}
