#include <stdio.h>

int main() {
    int num;
    int div = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++) {
        if(num % i == 0) {
            div++;
            printf("%d, ", i);
        }
    }

    if(div != 0) {
        printf("= divisor(es) alem de si mesmo e de 1\n");
        printf("Logo, numero nao primo");
    } else {
        printf("Numero primo");
    }

    return 0;
}