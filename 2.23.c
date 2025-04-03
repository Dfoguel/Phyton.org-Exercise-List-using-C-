#include <stdio.h>

int main() {
    float numero;
    
    printf("Digite um numero: ");
    scanf("%f", &numero);
    
    if (numero == (int) numero) {
        printf("O numero %.2f e inteiro.\n", numero);
    } else {
        printf("O numero %.2f e decimal.\n", numero);
    }
    
    return 0;
}
