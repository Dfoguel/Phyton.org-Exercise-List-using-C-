#include <stdio.h>

int main() {
    int num;
    while(1) {
        printf("Digite um numero inteiro entre 1 e 10: ");
        scanf("%d", &num);
        if (num >= 1 && num <= 10) {
            printf("Numero valido :))");
            break;
        } else {
            printf("Numero invalido!! >:(\n");
        }
    }
    return 0;
}