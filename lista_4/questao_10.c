#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int tam, tamn;
    int *vetorx = NULL, *vetorf = NULL;

    printf("Informe O tamanho do vetor:");
    scanf("%d", &tam);

    printf("Informe o intervalo do vetor:");
    scanf("%d", &tamn);

    vetorx = malloc(tam*sizeof(int));
    vetorf = malloc(tamn*sizeof(int));
 
    srand(time(NULL));

    for (int i = 0; i < tam; i++){
        *(vetorx+i) = rand() % tamn;
    }
    printf("Vetor gerado:\n");
    for (int i = 0; i < tam; i++){
        printf("%4d", *(vetorx + i));
    }
    for (int k = 0; k < tamn; k++){
      for (int i = 0; i < (tam); i++){
        if (k == *(vetorx + i)){
           *(vetorf + k) += 1;
        }
      }
    }
    printf("\nContador de frequência:\n");
    for (int i = 0; i < tamn; i++){
        printf("%4d ", i);
    }
    printf("\n");
    for (int i = 0; i < tamn; i++){
        printf("%4d ", *(vetorf + i));
    }
    return 0;
}
