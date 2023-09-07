
#include <stdio.h>

int main() {

  int maiorValor, menorValor, i, total=0;

  printf ("Informe um valor inteiro: ");
  scanf ("%d", &i);
  
  maiorValor = i;
  menorValor = i;


  while (i % 2 == 0 || i >= 0){

     printf ("\nInforme um valor inteiro: ");
     scanf ("%d", &i);

     if (i > maiorValor ){
       maiorValor = i;
     } else if (i < menorValor){
         menorValor = i;
     }

    total = menorValor * maiorValor;

    printf("\nO produto do maior valor pelo menor é: %d", total);
  }
printf ("\nFim do Programa!!");
  
return 0;
}	
