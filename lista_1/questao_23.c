#include <stdio.h>

int main() {
    
    int n, num1, num2, num3;

    printf("Digite um numero inteiro de 3 digitos: ");
    scanf("%d", &n);

    num1 = n / 100;
    num2 = (n / 10) % 10;
    num3 = n % 10;

    int inverso = num3 * 100 + num2 * 10 + num1;
    printf("Numero em ordem inversa: %d", inverso);

    return 0;

}
