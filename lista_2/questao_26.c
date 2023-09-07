#include <stdio.h>

int main (){
  
int dec;
int mask = 1, binario,b;

for (dec = 1; dec <= 256; dec++){
  printf ("O valor em decimal é: %d\n", dec);

  printf ("O valor em binário é: ");
  for (b=7;b >= 0;b--){

    binario =  (dec >> b) & mask;

  printf("%d", binario);
  }  
printf("\n");
printf("O valor em octal é: %o\n", dec);
printf("O valor em hexadecimal é: %X\n", dec);
printf("\n");
}
  return 0;
}
