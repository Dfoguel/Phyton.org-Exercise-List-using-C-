#include <stdio.h>

int main() {
    int num;
    int div = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++) {
        if(num % i == 0) {
            div++;
        }
    }

    if(div != 0) {
        printf("Numero nao primo\n");
        printf("%d divisor(es) alem de si mesmo e de 1", div);
    } else {
        printf("Numero primo");
    }

    return 0;
}