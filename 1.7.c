#include <stdio.h>
#include <math.h>

int main(){
    float aresta, dobroarea;
    printf("Digite o tamanho da aresta em metros: ");
    scanf("%f", &aresta);

    dobroarea = 2*pow (aresta, 2);
    printf("O dobro da area de um quadrado com essa aresta: %.2f", dobroarea);
    return 0;
}