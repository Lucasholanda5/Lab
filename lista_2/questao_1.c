#include <stdio.h>

int main(){

  int dias_semana;

  while (dias_semana!=0){
    puts("Infome um número entre 1 e 7:");
    scanf("%d",&dias_semana);

    switch (dias_semana){
      case 0:
        puts("Fim do programa!!");
        break;
      case 1:
        printf("Segunda\n");
        break;
      case 2:
        printf("Terça\n");
        break;
      case 3:
        printf("Quarta\n");
        break;
      case 4:
        printf("Quinta\n");
        break;
      case 5:
        printf("Sexta\n");
        break;
      case 6:
        printf("Sábado\n");
        break;
      case 7:
        printf("Domingo\n");
        break;
      default:
      printf("Numero de dia inválido\n");
    }
  }
    return 0;
}
