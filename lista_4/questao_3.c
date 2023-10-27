#include <stdio.h>

int main(void){

int num;

int *px, *py = NULL;

px = &num;

printf("Informe um valor: ");
scanf("%d", &num);

py = px;

while (*px != 0){

  if (*px < *py){
    *py = *px;
  }
  
  printf("O menor valor forneciado é: %d\n", *py);
  printf("Informe um valor: ");
  scanf("%d", &num);

}

printf("Fim!");
return 0;
}
