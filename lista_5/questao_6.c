#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAM 7

void gerar_vetor(int *, int);
void exibir_vetor(int *, int);
float media(int *, int);
void ordenar_vetor(int *, int);
float mediana(int *, int);

int main(){

    int vetor[TAM];

    gerar_vetor(vetor, TAM);

    exibir_vetor(vetor, TAM);

    ordenar_vetor(vetor, TAM);

    exibir_vetor(vetor, TAM);

        printf("\n\nMédia: %.2f\n", media(vetor, TAM));
        printf("\nMediana: %.2f\n\n", mediana(vetor, TAM));
    



    return 0;
}

void gerar_vetor(int *vetor, int tam){

    srand(time(NULL));

    for(int i = 0; i < tam; i++){
        *(vetor + i) = rand() % 100;
    }
}

void exibir_vetor(int *vetor, int tam){

     printf("\nVetor Gerado: \n");   
     for(int i = 0; i < tam; i++){
        printf("%3d", *(vetor + i));
     }
}

float media(int *vetor, int tam){

    int total = 0;

    for (int i = 0; i < tam; i++){
        total += *(vetor + i); 
    }
    
    return (float)total/tam;
}

void ordenar_vetor(int *vetor, int tam){

    int x;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam - 1; j++){
            if (*(vetor + j) > *(vetor + j + 1)){

                x = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = x;
                
            }
        }
    }
}

float mediana(int *vetor, int tam){
    
    float mediana = 0;

    if (tam % 2 == 0){

        mediana = (float)(*(vetor + (tam/2) - 1) + *(vetor + (tam/2)))/2;

    }else{
        mediana = *(vetor + ((tam - 1)/2));
    }

    return mediana;
}

float moda()
