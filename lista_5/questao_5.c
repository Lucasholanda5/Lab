#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float somar(float *, int);

int main(int argc, char *argv[]){

    if(argc != 2){
        printf("Uso: \n\t %d tamanho\n\n", *argv[1]);
        exit(1);
    }

    int tam = atoi(argv[1]);
    if (tam < 0){
        printf("Informe um tamnho válido!");
        exit(2);
    }

    float *pv = NULL;

    pv = malloc(tam * sizeof(float));

    if (!pv){
        printf("Memória não disponível.");
        exit(3);
    }
    srand(time(NULL));

    for (int i = 0; i < tam; i++){
        *(pv + i) = (float)(rand() % 1000)/(rand() % 100);
        printf("%.3f ", *(pv + i));
    }

    printf("\n\nA soma de todos os elementos do vetor é: %.3f", somar(pv, tam));

    free(pv);

    return 0;
}

float somar(float *pv, int tam ){

    float total = 0;

    for (int i = 0; i < tam; i++){
        total += *(pv + i);
    }

    return total;
}
