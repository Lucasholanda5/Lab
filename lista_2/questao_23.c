#include <stdio.h>

int main() 
    int num = 5;
    int pre_increment, pos_increment;

    pre_increment = ++num; 

    num = 5; 

    
    pos_increment = num++;

    printf("Valor original: 5\n");
    printf("Pré-incremento: %d\n", pre_increment); 
    printf("Pós-incremento: %d\n", pos_increment);

    return 0;
}
