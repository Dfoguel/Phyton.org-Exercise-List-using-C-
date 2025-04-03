#include <stdio.h>

int main() {
    int num;
    int cont1 = 0;
    int cont2 = 0;
    int cont3 = 0;
    int cont4 = 0;

    while(1) {
        printf("Digite um numero positivo entre 0 e 100: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("Saindo...");
            break;
        }

        if (num >= 0 && num <= 25) {
            cont1++;
        } else if (num <= 50) {
            cont2++;
        } else if (num <= 75) {
            cont3++;
        } else if (num <= 100) {
            cont4++;
        } else {
            printf("Digite um numero menor que 100\n");
        }
    }

    printf("\nResultado\n");
    printf("Numeros entre 0 e 25: %d\n", cont1);
    printf("Numeros entre 26 e 50: %d\n", cont2);
    printf("Numeros entre 51 e 75: %d\n", cont3);
    printf("Numeros entre 76 e 100: %d\n", cont4);

    return 0;
}