#include <stdio.h>

int main() {
    int N;
    int div = 0;

    printf("Digite um numero N: ");
    scanf("%d", &N);

    for (int i = 2; i < N; i++) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                div++;
            }
        }
        if (div == 0) {
            printf("%d ", i);
        } else {
            div = 0;
        }
    }

    printf("sao os numeros primos entre 1 e %d", N);

    return 0;
}