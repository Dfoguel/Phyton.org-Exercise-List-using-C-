#include <stdio.h>

int main() {
    int cod;
    int cod_alto, cod_baixo, cod_leve, cod_pesado;
    int n = 0;
    float altura, peso;
    float alto = -999;
    float baixo = 999;
    float leve = 999;
    float pesado = -999;
    float soma_peso = 0;
    float soma_altura = 0;

    while(1) {
        printf("\nDigite o numero do seu codigo: ");
        scanf("%d", &cod);

        if(cod == 0) {
            break;
        }

        printf("Digite sua altura (metros): ");
        scanf("%f", &altura);
        printf("Digite seu peso (kg): ");
        scanf("%f", &peso);

        if (altura < baixo) {
            baixo = altura;
            cod_baixo = cod;
        }
        if (altura > alto) {
            alto = altura;
            cod_alto = cod;
        }

        if (peso < leve) {
            leve = peso;
            cod_leve = cod;
        }
        if (peso > pesado) {
            pesado = peso;
            cod_pesado = cod;
        }

        soma_peso += peso;
        soma_altura += altura;
        n++;
    }

    float media_peso = soma_peso/n;
    float media_altura = soma_altura/n;

    printf("\nResultado:\n");
    printf("Maior altura = %.2f m (Cliente codigo %d)\n", alto, cod_alto);
    printf("Menor altura = %.2f m (Cliente codigo %d)\n", baixo, cod_baixo);
    printf("Maior peso = %.2f kg (Cliente codigo %d)\n", pesado, cod_pesado);
    printf("Menor peso = %.2f kg (Cliente codigo %d)\n", leve, cod_leve);
    printf("Media de altura = %.2f m\n", media_altura);
    printf("Media de peso = %.2f kg\n", media_peso);
}