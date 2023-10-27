#include <stdio.h>

int main(){

char str1[100], str2[100], str3[200];
char *ptr1 = str1, *ptr2 = str2, *ptr3 = str3;
int i=0,k=0;

   
  printf("Informe a 1 string:\n");
  scanf("%[^\n]s", str1);
  
  printf("Informe a 2 string:\n");
  scanf(" %[^\n]s", str2);

  while ( *(ptr1 + i) != '\0'){

    *(ptr3 + i) = *(ptr1 + i);
     i++;
  }

  while ( *(ptr3 + k) != '\0'){

    *(ptr3 + i) = *(ptr2 + k);
     i++;
     k++;
  }
  
  *(ptr3 + i ) = '\0';
  printf("A nova string é:\n %s", str3);

return 0;
}
