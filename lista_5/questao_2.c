#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD 100

void *menor_valor(int *, int tamanho);

int main(int argc, char *argv[]){

    if (argc != 2){
        printf("Use: \n\t %d tamanho do vetor\n\n", *argv[1]);
        exit (1);
    }

    int tam = atoi(argv[1]);
    if (tam < 1){
        printf("Valor inválido!");
        exit(2);
    }

    int *pv = NULL;

    pv = malloc(tam * sizeof(int)); 

        if (!pv){
        puts("Não há memória disponível. ");
        exit(1);
        }

    srand(time(NULL));

    printf("Vetor gerado: \n");

    for (int i = 0; i < tam; i++){
        
        *(pv + i) = rand() % QTD;
        printf("%d ", *(pv + i));
    }
    
    printf("\n\n");
    printf("O endereço do menor valor é: %p", menor_valor(pv, tam));

    free(pv);
    return 0;
}

void *menor_valor(int *px, int tamanho){
    int *menor = px;

    for (int i = 0; i < tamanho; i++){
        if (*(px + i) < *menor){
        menor = (px + i);
        }
    }
    
    return menor;
}
