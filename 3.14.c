#include <stdio.h>

int main() {
    int num;
    int pares = 0;
    int impares = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Numeros pares digitados = %d\n", pares);
    printf("Numeros impares digitados = %d", impares);

    return 0;
}