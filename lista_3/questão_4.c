#include <stdio.h>
#include <stdbool.h>

int main() {

  char str1[100], str2[100];
  int i = 0;
  bool iguais = true;
  
  printf("Informe duas strings:\n");
  scanf("%s %s", str1, str2);
  
  while (str1[i] != '\0' || str2[i] != '\0'){
    if (str1[i] != str2[i]){
      iguais = false;
      break;
    }   
    i++;
  }

  if (iguais){
    printf("As strings são iguais!");
  }else{
    printf("As strings não são iguais!");
  }
  return 0;

//4.b

#include <stdio.h>
#include <string.h>

int main() {

  char str1[100], str2[100];
  
  printf("Informe duas strings:\n");
  scanf("%s %s", str1, str2);
  
  if (strcmp(str1,str2) == 0){
    printf("As strings são iguais!");
  }else{
    printf("As strings não são iguais!");
  }
  return 0;
}
