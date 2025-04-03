#include <stdio.h>

int main() {
    int n;
    int div = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            div++;
        }
    }
    if (div > 0) {
        printf("Nao primo");
    } else {
        printf("Primo");
    }
    return 0;
}