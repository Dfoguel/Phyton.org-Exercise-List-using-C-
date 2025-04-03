#include <stdio.h>

int main () {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0){
        if (ano % 400 != 0) {
            printf("Ano nao bissexto");
        } else {
            printf("Ano bissexto");
        }
    } else {
        printf("Ano nao bissexto");
    }

    return 0;
}