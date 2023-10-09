#include <stdio.h>
#define TAM 3

int main(void){

  
int str[TAM][TAM], i, j;

for (i=0; i < TAM; i++){
  for (j=0; j < TAM; j++){  

    printf("Informe um valor para a posição [%d][%d]\n", i, j);
    scanf ("%d", &str[i][j]);   
  }
}

printf("Os elementos da diagonal principal são:\n"); 
for (i=0; i < TAM; i++){ 
    printf("%d, ", str[i][i]); 
  }

return 0;
}

