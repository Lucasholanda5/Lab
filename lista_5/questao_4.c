#include <stdio.h>

#define TAM 5

void min_max(int *, int, int *, int *);
void normalizar(int *, int);

int main(){

int vetor[] = {5,10,15,20,25};

normalizar(vetor, TAM);

printf("Vetor Normalizado: ");
for (int i = 0; i < TAM; i++){
   printf("%d ", vetor[i]);
}

    return 0;
}


void min_max(int *vetor, int tam, int *menor, int *maior){

    *menor = *maior = *vetor;

    for (int i = 0; i < tam; i++){
        if (*(vetor + i) < *menor){
            *menor = *(vetor + i);
        }

        if (*(vetor + i) > *maior){
            *maior = *(vetor + i);
        }
    }
}

void normalizar(int *vetor, int tam){
   int maior, menor;

   min_max(vetor, tam, &menor, &maior);

   for (int i = 0; i < tam; i++) {
   *(vetor + i) = (*(vetor + i) - menor) / (float)(maior - menor);
   }
}
