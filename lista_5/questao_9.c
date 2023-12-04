#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4 // Tamanho da matriz (altere para o tamanho desejado)

void preencherMatriz(int *matriz) {
    for (int i = 0; i < N * N; ++i) {
        *(matriz + i) = rand() % 10; 
    }
}

void imprimirMatriz(int *matriz) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ", *(matriz + i * N + j));
        }
        printf("\n");
    }
}

void verificarSomaDiagonal(int *matriz) {
    int soma_diagonal = 0;
    int *ptr = matriz; 

    for (int i = 0; i < N; ++i) {
        soma_diagonal += *ptr; 
        ptr += N + 1; 
    }

    if (soma_diagonal % 2 == 0) {
        printf("A soma dos elementos da diagonal principal é par.\n");
    } else {
        printf("A soma dos elementos da diagonal principal é ímpar.\n");
    }
}

int main() {
    int matriz[N][N];

    srand(time(NULL));

    preencherMatriz(&matriz[0][0]);

    printf("Matriz gerada:\n");
    imprimirMatriz(&matriz[0][0]);
    printf("\n");

    verificarSomaDiagonal(&matriz[0][0]);

    return 0;
}

