#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct InfoVetor {
    int *ponteiroMatriz;
    int quantidadeElementos;
    float media;
};

void calcularMedia(struct InfoVetor *info) {
    float soma = 0.0;
    for (int i = 0; i < info->quantidadeElementos; ++i) {
        soma += info->ponteiroMatriz[i];
    }
    info->media = soma / info->quantidadeElementos;
}

int main() {
    int quantidade;
    printf("Digite a quantidade de elementos no vetor: ");
    scanf("%d", &quantidade);

    int *vetor = (int *)malloc(quantidade * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < quantidade; ++i) {
        vetor[i] = rand() % 100;
    }

    struct InfoVetor info;
    info.ponteiroMatriz = vetor;
    info.quantidadeElementos = quantidade;
    calcularMedia(&info);

    printf("\nVetor gerado:\n");
    printf("[ ");
    for (int i = 0; i < quantidade; ++i) {
        printf("%d ", vetor[i]);
    }
    printf("]\n");

    printf("\nQuantidade de elementos: %d\n", info.quantidadeElementos);
    printf("Média dos elementos: %.2f\n", info.media);

    free(vetor);

    return 0;
}
