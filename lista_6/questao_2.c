#include <stdio.h>

struct Estoque {
    char nomePeca[50];
    int numeroPeca;
    float preco;
    int numeroPedido;
};

int main() {
    struct Estoque item;

    printf("Digite o nome da peça: ");
    scanf("%s", item.nomePeca);

    printf("Digite o número da peça: ");
    scanf("%d", &item.numeroPeca);

    printf("Digite o preço da peça: ");
    scanf("%f", &item.preco);

    printf("Digite o número do pedido: ");
    scanf("%d", &item.numeroPedido);

    printf("\nInformações do estoque:\n");
    printf("Nome da peça: %s\n", item.nomePeca);
    printf("Número da peça: %d\n", item.numeroPeca);
    printf("Preço: %.2f\n", item.preco);
    printf("Número do pedido: %d\n", item.numeroPedido);

    return 0;
}
