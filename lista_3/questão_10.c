#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MAX 10

int main(void){
srand(time(NULL));

int str[TAM][TAM], i, j, cont = 0, num;



for (i=0; i < TAM; i++){
  for (j=0; j < TAM; j++){  

    str[i][j] = rand() % MAX;
  }
}

printf("Matriz gerada:\n");
for (i=0; i < TAM; i++){
  printf("\n");
  for (j=0; j < TAM; j++){  

    printf("%d ", str[i][j]);
  }
}

do{
  printf("\n\nInforme o valor entre 0 e 9 a ser verificado a frequência na matriz: \n");
  scanf("%d", &num);
  if (num < 0 || num > 9) printf("\nValor inválido!");
}
while(num < 0 || num > 9 );

for (i=0; i < TAM; i++){
  for (j=0; j < TAM; j++){  

    if (str[i][j] == num) cont++;
  }
}

printf("\n\nO valor %d aparece %d vezes.", num, cont);
return 0;
}
