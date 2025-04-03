#include <stdio.h>

int main() {
    int n;
    int fatorial = 1;
    printf("Digite o numero que deseja fatorial: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        fatorial *= n-i;
    }

    printf("Resultado = %d", fatorial);

    return 0;
}