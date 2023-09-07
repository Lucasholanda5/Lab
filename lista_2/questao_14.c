#include <stdio.h>

int main(){

int i,x,num1,num2,cont=0;

printf("Informe dois valores: \n");
scanf ("%d %d", &num1, &num2);

if (num1 > num2){
  x = num1;
  num1= num2;
  num2 = x;
}

for (i = num1; i<=num2;i++){
  if (i % 3 == 0){
    cont++;
  }
}
  printf("O número de divisores por 3 é: %d", cont);
return 0;
}
