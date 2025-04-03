#include <stdio.h>

int main() {
    float salario;
    float porc_aum = 0.015;

    printf("Digite o salario inicial (R$): ");
    scanf("%f", &salario);

    for(int i = 0; i < 29; i++) { //29 anos = 1995 a 2024
        salario *= (1 + porc_aum);
        porc_aum = 2*porc_aum;
    }

    printf("Salario atual = R$%.2f", salario);

    return 0;
}