#include <stdio.h>

int main() {

    float horaAula;
    int horaTrabalhada;
    int percentualINSS;

    printf("Digite o valor da hora aula: ");
    scanf("%f", &horaAula);

    printf("Digite a quantia de horas trabalhadas: ");
    scanf("%d", &horaTrabalhada);

    printf("Digite o percentual do INSS (%%): ");
    scanf("%d", &percentualINSS);

    puts("\n---------- FOLHA DE PAGAMENTO ----------\n");

    printf("Salario bruto: %.2f\n\n", (horaAula * horaTrabalhada));
    printf("Desconto INSS: %.2f\n\n", ((horaAula * horaTrabalhada) * (percentualINSS / 100.0)));
    printf("SALARIO LIQUIDO: %.2f\n\n", ((horaAula * horaTrabalhada) - (horaAula * horaTrabalhada) * (percentualINSS / 100.0)));

    return 0;

}
