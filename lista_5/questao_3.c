#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD 100

void matriz(int * , int);

int main(int argc, char *argv[]){

    if (argc != 2){
        printf("Uso: \n\t %d tamanho do vetor\n\n", *argv[1]);
        exit(1);
    }

    int tam = atoi(argv[1]);
    if (tam < 1){
        printf("Tamanho informado inválido");
        exit(2);
    }

    int *pv = NULL;

    pv = malloc(tam * sizeof(int));

    if (!pv){
        puts("Não há memória disponível. ");
        exit(3);
    }

    srand(time(NULL));

    printf("Vetor gerado:\n");

    for (int i = 0; i < tam; i++){
        *(pv + i) = rand() % QTD;
        printf("%d ", *(pv + i));
    }
    
    printf("\n");
    matriz(pv, tam);

    return 0;
}

void matriz(int *pv, int tam){
    int matriz[2];

    matriz[0] = *pv;
    matriz[1] = *pv;

    for (int i = 0; i < tam; i++){
        if (*(pv + i) < matriz[0]){
            matriz[0] = *(pv + i);
        }
        if (*(pv + i) > matriz[1]){
            matriz[1] = *(pv + i);
        }
    }
  
    printf("Maior valor: %d, Menor valor: %d", matriz[1], matriz[0]);
}
