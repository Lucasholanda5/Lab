#include <stdio.h>

int main() {

    char s;
    float a;
    float p;
    
    printf("Insira seu sexo e altura em metros: ");
    scanf(" %c %f", &s, &a);
    
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
