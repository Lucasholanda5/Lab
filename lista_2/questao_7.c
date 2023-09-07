#include <stdio.h>

int main(){

  float num1,num2,resp;
  
  puts("Infome o primeiro valor: ");
  scanf ("%f", &num1);
  puts("Informe o segundo valor: ");
  scanf ("%f", &num2);

  while (num2==0){
     puts("Informe o segundo valor: ");
     scanf ("%f", &num2);
  }

  resp = (float) num1/num2;
  printf("O valor da divisão é: %.1f\n", resp);
  return 0;
}
