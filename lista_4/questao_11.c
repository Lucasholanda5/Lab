#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int vet, tam,i,j;

printf("Informe o tamanho do primeiro e do segundo vetor:\n");
scanf("%d",&vet );

printf("Informe o intervalo de números:\n");
scanf("%d",&tam );

int matriz1[vet], matriz2[vet],matriz3[tam][tam];

for (i = 0; i < tam; i++) {
    for (j = 0; j < tam; j++) {
        matriz3[i][j] = 0;
    }
}

srand(time(NULL));
printf("\n\n");

for (i = 0; i < vet; i++){
    matriz1[i] = rand() % tam;
    printf("%5d",matriz1[i]);
}
printf("\n");

for (i = 0; i < vet; i++){
    matriz2[i] = rand() % tam;
    printf("%5d",matriz2[i]);
}
printf("\n\n");
for (i = 0; i < vet; i++){
        matriz3[matriz1[i]][matriz2[i]]++;
}

for (i = 0; i < tam; i++){
   printf("\n");
    for (j = 0; j < tam; j++){
        printf("%5d",matriz3[i][j]);
    }
}
    return 0;
}
