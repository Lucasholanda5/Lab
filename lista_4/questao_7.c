#include <stdio.h>
#include <stdbool.h>

int main(){

char str1[100], crt;
char *ptr1 = str1;
int i=0;
bool encontrado = false;

   
  printf("Informe a string:\n");
  scanf("%[^\n]s", str1);
  
  printf("Informe o caractere a ser buscado:\n");
  scanf(" %c", &crt);

  while ( *(ptr1 + i) != '\0'){
     
    if (*(ptr1 + i) == crt){

        encontrado = true;
        break;
    }
    i++;
  }

  if (encontrado){
    printf("A string contém o caractere fornecido!");
  }else{
    printf("A string não contém o caractere fornecido!");
  }

return 0;
}
