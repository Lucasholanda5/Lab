#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7 // Tamanho dos vetores e da matriz

void preencherVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        *(vetor + i) = rand() % tamanho; 
    }
}

void imprimirVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        printf("%d ", *(vetor + i));
    }
    printf("\n");
}

void preencherMatriz(int matriz[N][N], int *X, int *Y) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int ocorrencias = 0;
            int *ptrX = X;
            int *ptrY = Y;

            for (int k = 0; k < N; ++k) {
                if (*ptrX == i && *ptrY == j) {
                    ocorrencias++;
                }
                ptrX++;
                ptrY++;
            }
            matriz[i][j] = ocorrencias;
        }
    }
}

void imprimirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int X[N], Y[N];
    int matriz[N][N];

    srand(time(NULL)); // Seed para números aleatórios

    preencherVetor(X, N);
    preencherVetor(Y, N);

    printf("Vetor X:\n");
    imprimirVetor(X, N);
    printf("\nVetor Y:\n");
    imprimirVetor(Y, N);

    preencherMatriz(matriz, X, Y);

    printf("\nMatriz M:\n");
    imprimirMatriz(matriz);

    return 0;
}

