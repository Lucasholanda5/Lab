
#include <stdio.h>

int main() {

  char str1[100];
  int i = 0;
  
  printf("Informe uma string:\n");
  scanf("%[^\n]s", str1);

  while (str1[i] != '\0'){
    i++;
  }
    printf("A string tem %d caracteres.", i);
}
