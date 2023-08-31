#include <stdio.h>

int main() {

    float Aula;
        int Trabalhado;
    int INSS;

    printf("Digite o valor da hora aula: ");
    scanf("%f", &Aula);

    printf("Digite a quantia de horas trabalhadas: ");
    scanf("%d", &Trabalhado);

    printf("Digite o percentual do INSS (%%): ");
    scanf("%d", &INSS);


    printf("Salario bruto: %.2f\n\n", (Aula * Trabalhado));
    printf("Desconto INSS: %.2f\n\n", ((Aula * Trabalhado) * (INSS / 100.0)));
    printf("Salario liquido: %.2f\n\n", ((Aula * Trabalhado) - (Aula * Trabalhado) * (INSS / 100.0)));

    return 0;

}
