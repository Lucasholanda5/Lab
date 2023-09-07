#include <stdio.h>

int main(){

  int num1,num2,num3,num4,num5,num;

  printf("Informe um número com 5 algarismos: ");
  scanf("%d", &num);
  printf("=========================================\n");

  if (num>=10000 && num<=99999){
  num1 = num / 10000;
  num2 = (num/ 1000) % 10;
  num3 = (num/100) % 10;
  num4 = (num/10) % 10;
  num5 = num % 10;

     if (num1==num5 && num2==num4){
        printf("O número é políndromo!\n");
      }else{
        printf("O número não é políndromo!\n");
      }    
  }else{
    printf("O número digitado não contém 5 algarismos! ");
  }
return 0;
}
