#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5 

void preencherVetor(float *vetor) {
    for (int i = 0; i < N; ++i) {
        vetor[i] = rand() % 100;
    }
}

float calcularErroQuadratico(float *A, float *B) {
    float erro_quadratico = 0.0;

    for (int i = 0; i < N; ++i) {
        erro_quadratico += pow((A[i] - B[i]), 2);
    }

    return sqrt(erro_quadratico / N);
}

int main() {
    float vetorA[N], vetorB[N];

    preencherVetor(vetorA);
    preencherVetor(vetorB);

    printf("Vetor A:\n");
    for (int i = 0; i < N; ++i) {
        printf("%.2f ", vetorA[i]);
    }
    printf("\n\nVetor B:\n");
    for (int i = 0; i < N; ++i) {
        printf("%.2f ", vetorB[i]);
    }
    printf("\n\n");

    float erro_medio_quadratico = calcularErroQuadratico(vetorA, vetorB);

    printf("Erro médio quadrático entre os vetores A e B: %.4f\n", erro_medio_quadratico);

    return 0;
}

