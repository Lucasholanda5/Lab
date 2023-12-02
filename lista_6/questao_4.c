#include <stdio.h>

#define TAM 2
#define QTD 3

struct Aluno{
     char nome[40];
     float notas[TAM];
     float media;
};

void ler_notas(float *, int);
float calcular_media(float *, int);

int main(){
    
    struct Aluno aluno[QTD];

    for (int i = 0; i < QTD; i++){
        printf("Informe o nome do %dº aluno: ", i+1);
        scanf("%s", aluno[i].nome);
        printf("Infome as notas do %dº aluno: \n", i+1);
        ler_notas(aluno[i].notas, TAM);
        aluno[i].media = calcular_media(aluno[i].notas, TAM);
    }

    for (int i = 0; i < QTD; i++){

        printf("A média do %dº aluno é: %.2f\n", i+1, aluno[i].media);
        
    }
    
    return 0;
}

void ler_notas(float *pnotas, int tam){
      for (int i = 0; i < tam; i++){
        printf("%dº nota: \n", i+1);
        scanf("%f", pnotas+i);
      }
}

float calcular_media(float *pnotas, int tam){

    float total = 0.0;

    for (int i = 0; i < tam; i++){
       
       total += *(pnotas + i);
        
    }

  return total/tam;
}
