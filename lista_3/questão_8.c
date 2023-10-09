#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INTERVALO 100

int main(void){

srand(time(NULL));
  
int str[100], num;

for (int i = 0; i < 100; i++){
  str[i] = rand() % INTERVALO;
}

for (int i=0; i < 100; i++){
  for (int k = 0; k < 99; k++){
     if (str[k] > str[k+1]){

       num = str[k];
       str[k] = str[k+1];
       str[k+1] = num;
       
     }    
  }
}

for (int i = 0; i < 100; i++){
  printf("%d\n", str[i]);
}

return 0;
}

