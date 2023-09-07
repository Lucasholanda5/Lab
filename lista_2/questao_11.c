#include <stdio.h>

int main(){
  int A,B,C,i,quadrado,resto,x;

  printf("Informe dois valores: \n");
  scanf("%d %d", &A,&B);
  printf("===========\n");
  
  if (A>B){
    C=A;
    A=B;
    B=C;
  }
  
  resto = A % 4;
  x = A-resto;
  
  for (i=x+4;i<=B;i += 4){

    quadrado = i*i;
    printf("%d\n",quadrado);
  }
  
return 0;
}
