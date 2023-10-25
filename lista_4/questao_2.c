#include <stdio.h>

int main() {

int x, y, z;

int *px, *py, *pz;

px = &x;
py = &y;
pz = &z;

printf("Informe o valor de X e Y:\n");
scanf("%d %d", &x, &y);

*pz = *px;
*px = *py;
*py = *pz;

printf("O valor trocado é X = %d, Y = %d\n ", *px,*py);
return 0;
}
