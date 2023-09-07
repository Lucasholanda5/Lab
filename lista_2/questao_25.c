#include <stdio.h>

int main (){

  int cont = 1,num = 3;
  float pi;

  pi = 4;

  while (cont <= 100000){

    printf ("Termo %d: \n",cont);
    
    pi -= (float) 4/num; 

    printf ("pi = %f\n", pi);

    cont++;
    num += 2;

    printf ("Termo %d: \n",cont);
    
    pi += (float) 4/num; 

    printf ("pi = %f\n", pi);  

    cont++;
    num += 2;
      
  }
  return 0;
}	
