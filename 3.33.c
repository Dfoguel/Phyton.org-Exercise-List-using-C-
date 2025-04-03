#include <stdio.h>

int main() {
    int i = 1;
    int n = 0;
    float temp; 
    float maior = -9999;
    float menor = 9999;
    float soma = 0;
    float media;

    while(1) {
        printf("Temperatura %d (999 = cancela programa): ", i);
        scanf("%f", &temp);

        if (temp == 999) {
            break;
        }

        i++;
        soma += temp;

        if (temp > maior) {
            maior = temp;
        }
        if (temp < menor) {
            menor = temp;
        }
        
    }

    media = soma/i;

    printf("Maior temperatura = %.2f graus celsius\n", maior);
    printf("Menor temperatura = %.2f graus celsius\n", menor);
    printf("Media de temperatura = %.2f graus celsius\n", media);

    return 0;
}