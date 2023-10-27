#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(void){

char num;
char *ptr; 

ptr = (char*)malloc(TAM * sizeof(char));

for (int i = 0; i < TAM; i++){
   printf("Informe a um valor para matriz:\n");
   scanf("  %c", &num);

   *(ptr + i) = num;
}
printf("Matriz gerada:\n");
for (int i = 0; i < TAM; i++){
   printf("[%p]%c  ", ptr+i, *(ptr+i));
}
return 0;
}
