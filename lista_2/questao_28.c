#include <stdio.h>

unsigned char esconderBits(unsigned char X, unsigned char Y) {
    
    if (Y < 5) {
        printf("Y não pode ser menor que 5.\n");
        return X;
    }

    
    unsigned char mascara = 0xF; 

    
    Y--;

    
    for (int i = 0; i < 4; i++) {
        if (Y - i >= 0) {
            
            Y = Y - i;
            Y = Y << 4;
            Y = Y >> 4;

            
            X = X & mascara;
            Y = Y | X;
        }
    }

  
    Y = Y + 2;

    
    for (int i = 0; i < 4; i++) {
        if (Y + i < 256) {
            
            Y = Y + i;
            Y = Y >> 4;
            Y = Y << 4;

            
            X = X & mascara;
            Y = Y | X;
        }
    }

    return Y;
}

int main() {
    unsigned char X, Y;

    printf("Digite o valor de X (0-255): ");
    scanf("%hhu", &X);

    printf("Digite o valor de Y (>= 5): ");
    scanf("%hhu", &Y);

    unsigned char resultado = esconderBits(X, Y);

    printf("Resultado: %hhu\n", resultado);

    return 0;
}
