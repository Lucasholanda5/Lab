#include <stdio.h>

int main(void) {
  
  int str[5];

  for (int i = 0; i < 5; i++){
    printf("Informe um valor para o vetor: \n");
    scanf("%d", &str[i]);

  }
  printf("============\n");
  
  for (int i = 4; i >= 0; i--){
    printf("%d\n", str[i]);
  }
  
  return 0;
}
