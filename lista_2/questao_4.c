#include <stdio.h>

int main(){

int altura_jose =  150, cres_jose = 2, altura_pedro = 110, cres_pedro = 3,anos=0;

while (altura_jose >= altura_pedro){
  altura_jose = altura_jose + cres_jose;
  altura_pedro = altura_pedro + cres_pedro;
  anos++;
}
printf ("Pedro será maior que josé em %d anos.\n ", anos);
return 0;
}

