int main(void) {
  
  char str1[100], str2[100], resultado[200];
  int i = 0, j = 0;
  
  
  printf("Informe a string: \n");
  scanf("%[^\n]s", str1);

  printf("Informe a string: \n");
  scanf(" %[^\n]s", str2);


  while (str1[i] != '\0'){
    resultado[i] = str1[i];
  i++; 
  }

    while (str2[j] != '\0'){
    resultado[i + j] = str2[j];
  j++; 
  }

  resultado[i + j] = '\0'; 
  
  printf("A nova string é:\n %s", resultado);

  return 0;
}





//5.b

#include <stdio.h>
#include <string.h>

int main(void) {
  
  char str1[100], str2[100], resultado[200];
  int i = 0, j = 0;
  
  
  printf("Informe a string: \n");
  scanf("%[^\n]s", str1);

  printf("Informe a string: \n");
  scanf(" %[^\n]s", str2);

  strcat(str1, str2);
  
  printf("A nova string é:\n %s", str1);

  return 0;
}

