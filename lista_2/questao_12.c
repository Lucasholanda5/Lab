#include <stdio.h>

int main(){

  int t,valor,resp;

  printf("Qual tabuada você deseja?: ");
  scanf("%d", &valor);

  for (t=1;t<=10;t = t + 1){
    resp = t*valor;
    printf("%d x %d = %d\n", t,valor,resp);
  }
return 0;
}
