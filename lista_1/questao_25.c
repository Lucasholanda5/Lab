#include <stdio.h>

int main() {
    
    int n, h = 0, m = 0, s = 0;

    printf("Informe a quantidade de segundos: ");
    scanf("%d", &n);

    if (n >= 3600) {
        h = n / 3600;
        n = n % 3600;
    }

    if (segInput >= 60) {
        m = n / 60;
        n = n % 60;
    }

    s = n;

    puts("\nO valor em horas, minutos e segundos é:");
    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;

}
