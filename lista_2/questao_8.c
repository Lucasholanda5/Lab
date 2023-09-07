#include <stdio.h>

int main(){

  int valor_fic,resto; 
  float valor_real, decimal,parcela,parcela1;


  
  puts("Infome o valor do produto: ");
  scanf ("%f", &valor_real);

  valor_fic = valor_real;
  
  decimal = (float) valor_real - valor_fic;

  if (valor_fic % 3 == 0){
      parcela = (float) valor_fic/3;
      parcela1 = (float) parcela + decimal;
  } else { 
     resto = valor_fic % 3; 
     parcela = (float) (valor_fic - resto)/3;
     parcela1 = (float) parcela + decimal + resto;
  }
  printf("O valor da entrada é: R$%.2f\n", parcela1);
  printf("O valor da 2 e 3 parcela é: R$%.2f\n", parcela);

  return 0;
}
