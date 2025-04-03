#include <stdio.h>

int main() {
    const float valor_produto = 1.99;
    int produtos = 50;
    float valor;

    printf("Loja Quase Dois - Tabela de precos\n");

    for (int i = 1; i < produtos + 1; i++) {
        valor = valor_produto * i;
        printf("%d - R$%.2f\n", i, valor);
    }

    return 0;
}