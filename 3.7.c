#include <stdio.h>

int main () {
    int i, num, maior;

    printf("Digite um numero: ");
    scanf("%d", &maior);

    for (i=1; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
    }
    
    printf("Maior numero digitado: %d", maior);

    return 0;
}