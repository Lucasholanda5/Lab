#include <stdio.h>

int main() {

int num1,num2,i,x,total=0;
unsigned long long f , fat;

printf ("Informe dois valores inteiros: \n");
scanf("%d %d", &num1, &num2);
printf ("\n");

if (num1 > num2){

  x = num1;
  num1 = num2;
  num2 = x;
  
}

  
for (i = num1; i <= num2; i++){
  if (i % 2 != 0 ){
     fat = 1;
     for (f = 1; f <= i; f++){
       fat *= f;
  
     }
    
  total += fat; 
    
  }

}

printf ("\nO fatorial  dos números é:  %d", total);
  
return 0;
}

