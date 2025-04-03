#include <stdio.h>

int main() {
    int codigo, veiculos, acidentes;
    int maior = -9999999;
    int menor = 9999999;
    int soma_veiculos = 0;
    int soma_acidentes = 0;
    float media_veiculos, media_acidentes;
    int cod_maior, cod_menor;
    int n;

    for (int i = 1; i < 6; i++) {
        printf("\nDigite o codigo da cidade %d: ", i);
        scanf("%d", &codigo);
        printf("Digite o numero de veiculos de passeio (em 1999): ");
        scanf("%d", &veiculos);
        soma_veiculos += veiculos;
        printf("Digite o numero de acidentes de transito com vitimas (em 1999): ");
        scanf("%d", &acidentes);

        if (veiculos > 2000) {
            soma_acidentes += acidentes;
            n++;
        }

        if (acidentes > maior) {
            maior = acidentes;
            cod_maior = codigo;
        }
        if (acidentes < menor) {
            menor = acidentes;
            cod_menor = codigo;
        }        
    }

    media_veiculos = (float)soma_veiculos/5;
    media_acidentes = (float)soma_acidentes/n;

    printf("\nResultado\n");
    printf("Maior indice de acidentes = %d (Cidade codigo %d)\n", maior, cod_maior);
    printf("Menor indice de acidentes = %d (Cidade codigo %d)\n", menor, cod_menor);
    printf("Media de veiculos das cidades = %.2f veiculos\n", media_veiculos);
    printf("Media de acidentes de transito em cidades com menos de 2000 veiculos de passeio = %.2f\n", media_acidentes);

    return 0;
}