#include <stdio.h>

int main() {

int num1,num2,total=0,media,x,cont=0,i;

printf ("Informe dois valores inteiros: \n");
scanf("%d %d", &num1, &num2);
printf ("\n");

if (num1 > num2){

  x = num1;
  num1 = num2;
  num2 = x;
  
}

  
for (i = num1; i <= num2; i++){

  total += i;
  cont++;

}
media = total/cont;

printf ("\nA média dos números é:  %d", media);
  
return 0;
}
