#include <stdio.h>

int main(){

  float i,maior_valor,menor_valor;

  printf("Informe o valor: ");
  scanf("%f",&maior_valor);
  menor_valor = maior_valor;
  printf("Maior valor: %.2f\n", maior_valor);
  printf("Menor valor: %.2f\n", menor_valor);

  while (i != 0){
  printf("Informe o valor: ");
  scanf("%f",&i);
  if (i == 0){
    printf("Fim do programa!!\n");
    Break;
  }else if (i >= maior_valor){
        maior_valor=i;
    }  else if (i <= menor_valor){
         menor_valor=i;
    }
  printf("Maior valor: %.2f\n", maior_valor);  
  printf("Menor valor: %.2f\n", menor_valor);  
  }
  
  
return 0;
}
