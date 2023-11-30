#include <stdio.h>
#include <stdlib.h>

#define QTD_OPERACOES 2

void somar(int, int);
void multiplicar(int, int);

int main(int argc, char *argv[]) {

    void (*pfunc[])(int, int) = {somar, multiplicar};

    if (argc != 4) {
        printf("Use \n\t %s operação valor_1 valor_2\n\n", *argv);
        exit(1);
    }

    int operacao = atoi(argv[1]);
    int valor_1 = atoi(argv[2]);
    int valor_2 = atoi(argv[3]);

    if ((operacao < 0) || (operacao >= QTD_OPERACOES)) {
        printf("Operação não implementada");
        exit(2);
    }

    (*pfunc[operacao])(valor_1, valor_2);

    return 0;
}

void somar(int x, int y) {
    printf("Resultado: %d\n", x + y);
}

void multiplicar(int x, int y) {
    printf("Resultado: %d\n", x * y);
}
