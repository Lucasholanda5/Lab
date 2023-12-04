#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD 100
#define T 10

void gerar_vetor(int *, int, int);
void exibir(int *, int, int);
void binarizar(int *, int, int, int *);


int main(int argc, char *argv[]){

   if (argc != 3){
       printf("Uso: \n\t %s dimenção_1 dimenção_2 \n\n", argv[0]);
       exit(1);
   }


   int tam_1 = atoi(argv[1]);
   int tam_2 = atoi(argv[2]);
   if (tam_1 < 0 || tam_2 <0){
      printf("Dimenção inválida!");
      exit(2);
   }

   int matriz[2] = {0 , 1};

   int *pv = malloc(tam_1 * tam_2 * sizeof(int));

   gerar_vetor(pv, tam_1, tam_2);
   exibir(pv, tam_1, tam_2);
   binarizar(pv, tam_1, tam_2, matriz);
   exibir(pv, tam_1, tam_2);

   return 0;
}


void gerar_vetor(int *px, int tam_1, int tam_2){

    srand(time(NULL));

    for (int i = 0; i < tam_1*tam_2; i++){
        *(px + i) = rand() % QTD;
    }
}

void exibir(int *px, int tam_1, int tam_2){

    for (int i = 0; i < tam_1; i++){
        printf("\n");
        for (int j = 0; j < tam_2; j++){

            printf("%3d", px[i*tam_2 + j]);
        }  
    }
}

void binarizar(int *px, int tam_1, int tam_2, int *m){

    for (int i = 0; i < tam_1*tam_2; i++){

        if (px[i] > T){
            *(px + i) = *(m + 1);
        }else{
            *(px + i) = *m;
        }
    }  
}
