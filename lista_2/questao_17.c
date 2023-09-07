#include <stdio.h>

int main() {

  int C;
  float F;

  for (C = 10; C <= 100; C += 10){

    F = (1.8*C)+32;

    printf ("\nO valor em Celsius é : %d C", C);
    printf ("\nO valor em Fahrenheit é: %.1f F", F);
    printf ("\n");

  }

    return 0;
}
