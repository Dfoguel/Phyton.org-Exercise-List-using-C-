#include <stdio.h>

int main() {
    while(1) {
        float total = 0;
        float dinheiro, troco;
        float valor = 0.1;
        int i = 0;

        while(valor != 0) {
            i++;
            printf("Produto %d: R$ ", i);
            scanf("%f", &valor);
            total += valor;
        }

        if (total == 0) {
            printf("Fim!");
            break;
        }

        printf("Total: R$ %.2f\n", total);
        printf("Quanto o cliente forneceu de dinheiro (R$)?\n");
        scanf("%f", &dinheiro);
        troco = dinheiro - total;
        printf("Dinheiro: R$ %.2f\n", dinheiro);
        printf("Troco: R$ %.2f\n\n", troco);
        printf("Proxima compra...\n");
    }

    return 0;
}