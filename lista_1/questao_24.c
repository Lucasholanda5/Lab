#include <stdio.h>

int calculate(int x, int n) {

    return (x << n) << 1;

}

int main() {

    int x, n;
    
    printf("Digite um numero x: ");
    scanf("%d", &x);

    printf("Digite um numero n: ");
    scanf("%d", &n);

    int resultado = calculate(x, n);
    printf("O produto de %d por 2 elevado a %d é: %d\n", x, n, resultado);
    
    return 0;

}
