#include <stdio.h>

struct Usuario{
    char nome[50];
    int idade;
    char email[50];
};

int main(){

    struct Usuario info;
    FILE *arquivo;
    char continuar;

    arquivo = fopen("Usuarios.csv", "a");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fprintf(arquivo, "Nome,Idade,Email\n");

    do {
       printf("Informe o nome: ");
       scanf("%s", info.nome);

       printf("Informe a idade: ");
       scanf("%d", &info.idade);

       printf("Informe o email: ");
       scanf("%s", info.email);

       fprintf(arquivo, "%s,%d,%s\n", info.nome,info.idade,info.email);

       printf("Deseja adicionar outro usuario ? (S/N)");
    }while(continuar == 'S' || continuar == 's');

    fclose(arquivo);

    printf("Dados gravados com sucesso!");

    return 0;
}
