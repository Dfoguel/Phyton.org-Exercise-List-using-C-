#include <stdio.h>

int main(){
    float valorhora, horames, salario;
    printf("Quanto voce ganha por hora?\n");
    scanf("%f", &valorhora);
    printf("E quantas horas voce trabalha por mes?\n");
    scanf("%f", &horames);
    salario = valorhora*horames;
    printf("Logo, seu salario e igual a %.2f reais", salario);
    return 0;
}