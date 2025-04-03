#include <stdio.h>

int main() {
    float valorDivida;
    printf("Digite o valor da divida: R$ ");
    scanf("%f", &valorDivida);

    printf("\n%-15s %-15s %-20s %-15s\n", "Valor da Divida", "Valor dos Juros", "Quantidade de Parcelas", "Valor da Parcela");

    int parcelas[] = {1, 3, 6, 9, 12};
    float juros[] = {0, 0.10, 0.15, 0.20, 0.25};

    for (int i = 0; i < 5; i++) {
        float valorJuros = valorDivida * juros[i];
        float valorTotal = valorDivida + valorJuros;
        float valorParcela = valorTotal / parcelas[i];

        printf("R$ %-12.2f R$ %-12.2f %-20d R$ %-12.2f\n", valorTotal, valorJuros, parcelas[i], valorParcela);
    }

    return 0;
}
