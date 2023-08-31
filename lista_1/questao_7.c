#include <stdio.h>

int main() {
    int h;
    int m;
    int s;
    
    printf("Digite um horário: ");
    scanf(" %d %d %d", &h, &m, &s);
    
    if (m >= 60) {

        printf("Numero de minutos maior de 60");
        return 1;

    } else if (s >= 60) {

        printf("Numero de segundos maior de 60");
        return 1;
    }    
    
    printf("\nHorario dado em segundos: %d", (h * 3600 + m * 60 + s));

    return 0;

}
