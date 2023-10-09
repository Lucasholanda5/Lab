#include <stdio.h>
#include <stdbool.h>

int main(void) {
  
  char str[100], crt;
  int i = 0;
  bool encontrado = false;
  
  printf("Informe uma string: \n");
  scanf("%[^\n]s", str);
  printf("Informe um caracter: \n");
  scanf("%c", &crt);

  while (str[i] != '\0'){
    if (str[i] == crt){
      encontrado = true;
      break;
    }
  i++;
  }

  if (encontrado){
    printf("A string contém o caracter fornecido!");
  }else{
   printf("A string nao contém o caracter fornecido!");
  }
  return 0;
}
