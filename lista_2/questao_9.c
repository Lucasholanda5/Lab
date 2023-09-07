#include <stdio.h>

int main(){

  int cont;
  int num1 = 1 , num2 = 1, prox_termo;
  printf("Sequência de fibonacci:\n");
  printf("%d  %d",num1,num2);

  for (cont=3;cont<=20;cont++){ 

    prox_termo = num1 + num2;

    printf("\t%d", prox_termo);

    num1 = num2;
    num2 = prox_termo;
  }
  return 0;
}

