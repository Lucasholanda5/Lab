#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int tam, num;
  int *matriz;

  printf("Informe o tamanho da matriz:\n");
  scanf("%d", &tam);

  matriz = malloc(tam*sizeof(int));

  if (!matriz){
  printf("Memória nao disponível");
  exit(1);
  }

  srand(time(NULL));

  for(int i = 0; i<tam; i++){
    *(matriz + i) = rand() % 100;
  }

  for (int k = 0; k < tam; k++){
    for (int i = 0; i < (tam - 1); i++){
        if (*(matriz + i) > *(matriz + (i + 1))){

            num = *(matriz+i);
            *(matriz+i) = *(matriz + (i+1));
            *(matriz+(i+1)) = num; 
        }
    }
  }

  for(int i = 0; i < tam; i++){
    printf("%5d", *(matriz + i) );
  }
  
  free(matriz);
    return 0;
}
