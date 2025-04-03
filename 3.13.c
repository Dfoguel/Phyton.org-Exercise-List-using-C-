#include <stdio.h>
#include <math.h>

int main() {
    int base, potencia; 
    int resultado = 1;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite a potencia: ");
    scanf("%d", &potencia);

    for (int i = 0; i < potencia; i++) {
        resultado *= base;
    }

    printf("Reusultado = %d", resultado);

    return 0;
}