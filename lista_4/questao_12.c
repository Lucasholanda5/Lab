#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet, tam, i, j;

    printf("Informe o tamanho do vetor X:\n");
    scanf("%d", &vet);

    printf("Informe o intervalo de números:\n");
    scanf("%d", &tam);

    int matriz1[vet], matriz3[tam][tam];

    srand(time(NULL));

    for (i = 0; i < vet; i++) {
        matriz1[i] = rand() % tam;
        printf("%3d", matriz1[i]);
    }
    printf("\n");

    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            matriz3[i][j] = 0;
        }
    }

    for (i = 0; i < vet; i++) {
        int xi = matriz1[i];
        int r = rand() % 10 + 1; 

        int yi;
        if (r >= 1 && r <= 3) {
            yi = xi;
        } else if (r > 3 && r <= 5) {
            yi = xi - 1;
        } else if (r > 5 && r <= 7) {
            yi = xi + 1;
        } else if (r > 7 && r <= 9) {
            yi = xi - 2;
        } else if (r > 9 && r <= 10) {
            yi = xi + 2;
        }

        if (yi < 0) {
            yi = 0;
        } else if (yi >= tam) {
            yi = tam - 1;
        }

        matriz3[xi][yi]++;
    }

    printf("\nMatriz de coocorrências:\n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("%3d", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
