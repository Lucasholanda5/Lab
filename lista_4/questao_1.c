#include <stdio.h>

int main() {

int x, y, z;

int *px, *py, *pz;

px = &x;
py = &y;
pz = &z;

printf("Informe o valor de X e Y:\n");
scanf("%d %d", &x, &y);

*pz = *px + *py;

printf("O valor da soma é %d e o endereço é [%p]\n ", *pz, (void*)pz);
return 0;
}
