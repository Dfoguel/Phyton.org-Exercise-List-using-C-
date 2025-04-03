#include <stdio.h>

int main() {
    float valor_produto;
    int produtos = 50;
    float valor;

    printf("Digite o valor de cada pao(R$): ");
    scanf("%f", &valor_produto);

    printf("Panificadora Pao de Ontem - Tabela de precos\n");

    for (int i = 1; i < produtos + 1; i++) {
        valor = valor_produto * i;
        printf("%d - R$%.2f\n", i, valor);
    }

    return 0;
}