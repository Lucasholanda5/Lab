#include <stdio.h>

int main(){

char str[100];
char *ptr = str;
int i=0;

   
  printf("Informe a string:");
  scanf("%[^\n]s", str);

  while ( *(ptr + i) != '\0'){
     i++;
  }

 printf("A string tem %d caracteres.", i);
return 0;
}
