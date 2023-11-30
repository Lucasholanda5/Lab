#include <stdio.h>

struct Professor {
    char nome[50];
    int idade;
    char departamento[50];
};

struct Disciplina {
    char nomeDisciplina[50];
    int codigoDisciplina;
    struct Professor infoProfessor;
};

int main() {
    struct Disciplina disciplina;

    printf("Digite o nome da disciplina: ");
    scanf("%s", disciplina.nomeDisciplina);

    printf("Digite o código da disciplina: ");
    scanf("%d", &disciplina.codigoDisciplina);

    printf("Digite o nome do professor: ");
    scanf("%s", disciplina.infoProfessor.nome);

    printf("Digite a idade do professor: ");
    scanf("%d", &disciplina.infoProfessor.idade);

    printf("Digite o departamento do professor: ");
    scanf("%s", disciplina.infoProfessor.departamento);

    printf("\nInformações da disciplina:\n");
    printf("Nome da disciplina: %s\n", disciplina.nomeDisciplina);
    printf("Código da disciplina: %d\n", disciplina.codigoDisciplina);
    printf("\nInformações do professor:\n");
    printf("Nome: %s\n", disciplina.infoProfessor.nome);
    printf("Idade: %d\n", disciplina.infoProfessor.idade);
    printf("Departamento: %s\n", disciplina.infoProfessor.departamento);

    return 0;
}
