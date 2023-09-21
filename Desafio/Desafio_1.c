#include <stdio.h>
#include <stdlib.h>

int main() {

 unsigned char acao, posicao, estado = 0, binario, status,i, desocupar;
 unsigned char mask = 1;
 int n;

 while (acao != 3){
   printf("=================================\n");
   printf("Informe a ação: \nOcupar armário - 1\nLiberar armário - 2\nSair - 3\n\n");
   scanf("%hhu", &acao);
  switch(acao){
    case 1: 
      if (estado == 255){
      printf("=================================\n");
      printf("Todos os armários estao ocupados!\n");
       break;
      } else {
      do{
      posicao = rand() % 8;
      binario = estado & (mask << posicao);
      }
      while (binario != 0);
        
    printf("=================================\n");
    printf("O armário %hhu foi ocupado.\n", posicao + 1);
    estado = estado ^ (mask << posicao);
  
    break;
    }

    case 2:
      printf("Qual armário deseja desocupar?\n");
      scanf("%hhu", &desocupar);

      if (desocupar > 8){
        printf("=================================\n");
        printf("Armário inválido!\n");
      } else if ((estado >> desocupar -1) & mask){ 
        estado = estado ^ (mask << desocupar - 1);

        printf("=================================\n");
        printf("O armário %hhu foi desocupado.\n", desocupar);
      } else {
        printf("=================================\n");
        printf("O armário %hhu já está livre!\n", desocupar);
      }
    break;
    
    default:
     printf("=================================\n");
     printf("Número inválido!\n");
  
    
  }
 printf("=================================\n");
 printf("Lista de armários:\n\n");
 for (n = 0; n < 8; n++){
    i = estado;
    status = (i >> n) & mask;

    if (status == 0){
      printf("Armário %d: Livre\n",n + 1);
    } else {
      printf("Armário %d: Ocupado\n",n + 1);
    }
  }
  printf("\n");
 }
printf("Fim do Programa!\n");
  return 0;
}
