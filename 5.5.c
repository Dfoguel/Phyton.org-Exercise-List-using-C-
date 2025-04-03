#include <stdio.h>

float somaImposto(float taxaImposto, float custo) {
    float novocusto;
    taxaImposto = 1 + (taxaImposto/100);
    novocusto = custo*taxaImposto;
    return novocusto;
}

int main() {
    float a, b, res;
    printf("Digite a taxa do imposto (%%): ");
    scanf("%f", &a);
    printf("Digite o custo antes do imposto (R$): ");
    scanf("%f", &b);

    res = somaImposto(a, b);
    printf("Custo final = R$%.2f", res);

    return 0;
}