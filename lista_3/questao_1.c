#include <stdio.h>

int main(void) {
  
  float vetor[15];
  float num;
  float maior, menor;

    printf("Informe um valor para o vetor: ");
    scanf("%f", &num);
  
    maior = num;
    menor = num;
    vetor[0] = num;
  
  for (int i = 1; i < 15; i++){
    printf("Informe um valor para o vetor: ");
    scanf("%f", &num);

      vetor[i] = num;

      if (num > maior){
        maior = num;
      } else if (num < menor){
        menor = num;        
      }
  }

    printf("\n\nA soma do maior pelo menor valor fornecido é: %.1f", maior + menor);

  return 0;
}
