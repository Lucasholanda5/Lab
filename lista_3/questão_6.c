#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    srand(time(NULL));

    int str[3];
    int geo = 1, ari = 0, i;

    for (i = 0; i < 3; i++) {
        str[i] = rand() % 20;

        ari += str[i];
        geo *= str[i];
    }

    printf("Os números gerados são: %d, %d, %d\n", str[0], str[1], str[2]);
    printf("A média aritmética é: %.1f\n", (float)ari / (i + 1));
    printf("A média geométrica é: %.1f\n", pow((double)geo, 1.0 / (i + 1)));

    return 0;
}

