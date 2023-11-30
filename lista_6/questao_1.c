#include <stdio.h>

struct Aluno {
    float nota1;
    float nota2;
    float media;
};

int main() {
    struct Aluno aluno;

    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);

    aluno.media = (aluno.nota1 + aluno.nota2) / 2.0;

    printf("\nNotas do aluno:\n");
    printf("Nota 1: %.2f\n", aluno.nota1);
    printf("Nota 2: %.2f\n", aluno.nota2);
    printf("Média: %.2f\n", aluno.media);

    return 0;
}
