#include <stdio.h>

int main(){

int i,x,num1,num2,total=0;

printf("Informe dois valores: \n");
scanf ("%d %d", &num1, &num2);

if (num1 > num2){
  x = num1;
  num1= num2;
  num2 = x;
}

for (i = num1; i<=num2;i++){
  if (i % 2== 0){
    total = total + i;
  }
}
  printf("O soma dos números pares é: %d", total);
return 0;
}
