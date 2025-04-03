#include <stdio.h>

int main() {
    int cod = 1;
    int quant;
    float total = 0;

    while(cod != 0) {
        printf("Digite o codigo do produto desejado (Digite 0 para sair): ");
        scanf("%d", &cod);
        if (cod < 100 || cod > 105) {
            printf("Codigo invalido, tente novamente...\n");
            continue;
        }

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quant);

        if (cod ==  100 || cod == 103) {
            total += 1.20*quant;
        }
        if (cod ==  101 || cod == 104) {
            total += 1.30*quant;
        }
        if (cod ==  102) {
            total += 1.50*quant;
        }
        if (cod ==  105) {
            total += 1.00*quant;
        }
    }

    printf("Valor total: R$%.2f", total);

    return 0;
}