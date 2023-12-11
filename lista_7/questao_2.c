#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD 100

struct Ferramenta {
    int registro;
    char nome[50];
    int quantidade;
    float preco;
};

void inicializar_arquivo() {
    FILE *arquivo;
    struct Ferramenta vazio = {0, "", 0, 0.0};

    arquivo = fopen("hardware.dat", "wb");

    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo");
        exit(1);
    }

    for (int i = 0; i < QTD; i++) {
        fwrite(&vazio, sizeof(struct Ferramenta), 1, arquivo);
    }

    fclose(arquivo);
}

void adicionar_ferramentas() {
    FILE *arquivo;
    struct Ferramenta nova_ferramenta;

    arquivo = fopen("hardware.dat", "r+b");

    int posicao = -1;

    for (int i = 0; i < QTD; i++) {
        fseek(arquivo, i * sizeof(struct Ferramenta), SEEK_SET);
        fread(&nova_ferramenta, sizeof(struct Ferramenta), 1, arquivo);

        if (nova_ferramenta.registro == 0) {
            posicao = i;
            break;
        }
    }

    if (nova_ferramenta.registro == -1) {
        printf("Inventário cheio!\n");
        fclose(arquivo);
        return;
    }

    printf("Digite o nome da ferramenta: \n");
    scanf("%s", nova_ferramenta.nome);

    printf("Digite a quantidade: \n");
    scanf("%d", &nova_ferramenta.quantidade);

    printf("Digite o custo: \n");
    scanf("%f", &nova_ferramenta.preco);

    nova_ferramenta.registro = posicao + 1;

    fseek(arquivo, posicao * sizeof(struct Ferramenta), SEEK_SET);
    fwrite(&nova_ferramenta, sizeof(struct Ferramenta), 1, arquivo);

    printf("Ferramenta adicionada com sucesso\n");

    fclose(arquivo);
}

void listar_ferramentas() {
    FILE *arquivo;
    struct Ferramenta ferramenta;

    arquivo = fopen("hardware.dat", "r+b");

    for (int i = 0; i < QTD; i++) {
        fseek(arquivo, i * sizeof(struct Ferramenta), SEEK_SET);
        fread(&ferramenta, sizeof(struct Ferramenta), 1, arquivo);

        if (ferramenta.registro != 0) {
            printf("Registro: %d\n", ferramenta.registro);
            printf("Nome: %s\n", ferramenta.nome);
            printf("Quantidade: %d\n", ferramenta.quantidade);
            printf("Valor: %.2f\n", ferramenta.preco);
        }
    }

    fclose(arquivo);
}

void excluir_ferramenta() {
    FILE *arquivo;
    struct Ferramenta ferramenta;
    int num_registro;

    arquivo = fopen("hardware.dat", "r+b");

    printf("Digite o número de registro da ferramenta a ser excluída: \n");
    scanf("%d", &num_registro);

    fseek(arquivo, (num_registro - 1) * sizeof(struct Ferramenta), SEEK_SET);
    fread(&ferramenta, sizeof(struct Ferramenta), 1, arquivo);

    if (ferramenta.registro != 0) {
        ferramenta.registro = 0;
        strcpy(ferramenta.nome, "");
        ferramenta.quantidade = 0;
        ferramenta.preco = 0.0;

        fseek(arquivo, (num_registro - 1) * sizeof(struct Ferramenta), SEEK_SET);
        fwrite(&ferramenta, sizeof(struct Ferramenta), 1, arquivo);

        printf("Ferramenta excluída com sucesso!\n");
    } else {
        printf("Registro não encontrado.\n");
    }

    fclose(arquivo);
}

void atualizar_ferramenta() {
    FILE *arquivo;
    struct Ferramenta ferramenta;
    int num_registro;

    arquivo = fopen("hardware.dat", "r+b");

    printf("Digite o número de registro da ferramenta a ser atualizada: \n");
    scanf("%d", &num_registro);

    fseek(arquivo, (num_registro - 1) * sizeof(struct Ferramenta), SEEK_SET);
    fread(&ferramenta, sizeof(struct Ferramenta), 1, arquivo);

    if (ferramenta.registro != 0) {
        printf("Digite o novo nome da ferramenta (ou '-' para manter o mesmo): \n");
        scanf("%s", ferramenta.nome);

        printf("Digite a nova quantidade: \n");
        scanf("%d", &ferramenta.quantidade);

        printf("Digite o novo custo: \n");
        scanf("%f", &ferramenta.preco);

        fseek(arquivo, (num_registro - 1) * sizeof(struct Ferramenta), SEEK_SET);
        fwrite(&ferramenta, sizeof(struct Ferramenta), 1, arquivo);

        printf("Informações da ferramenta atualizadas com sucesso!\n");
    } else {
        printf("Registro não encontrado.\n");
    }

    fclose(arquivo);
}

int main() {
    int escolha;

    inicializar_arquivo();

    do {
        printf("Informe a ação:\n");
        printf("1 - Adicionar Ferramenta.\n");
        printf("2 - Listar Ferramentas.\n");
        printf("3 - Excluir Ferramenta.\n");
        printf("4 - Atualizar informações de uma Ferramenta\n");
        printf("0 - Finalizar programa.\n");
        scanf("%d", &escolha);

        switch(escolha) {
            case 1:
                adicionar_ferramentas();
                break;
            case 2:
                listar_ferramentas();
                break;
            case 3:
                excluir_ferramenta();
                break;
            case 4:
                atualizar_ferramenta();
                break;
            case 0:
                printf("Fim do programa!\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while (escolha != 0);

    return 0;
}
