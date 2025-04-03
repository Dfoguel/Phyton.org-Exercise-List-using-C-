#include <stdio.h>

int main() {
    int numero;
    int altura;
    int alto = -1;
    int baixo = 10;
    int num_alto, num_baixo;

    for (int i = 0; i < 10; i++) {
        printf("\nDigite o numero do aluno: ");
        scanf("%d", &numero);
        printf("Digite a altura do aluno (cm): ");
        scanf("%d", &altura);

        if (altura > alto) {
            alto = altura;
            num_alto = numero;
        }
        if (altura < baixo) {
            baixo = altura;
            num_baixo = numero;
        }
    }

    printf("\nResultado:\n");
    printf("Maior altura = %d cm (Aluno numero %d)\n", alto, num_alto);
    printf("Menor altura = %d cm (Aluno numero %d)\n", baixo, num_baixo);

    return 0;
}