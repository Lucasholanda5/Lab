#include <stdio.h>

int main(){

  int total3 = 0,total5=0,n;

  for (n=0;n<=200;n++){
  if (n<100){ 
    if (n % 3 == 0){
      total3 += n;
    }
  } else if (n % 5 == 0){
    total5 += n;
    }
  }
  printf("A soma dos números divisíveis por 3 é: %d\n", total3);
  printf("A soma dos números divisíveis por 5 é: %d\n", total5);
return 0;
}
