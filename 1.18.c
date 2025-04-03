#include <stdio.h>

int main(){
    float tamanho, velocidade, tempo;
    printf("Tamanho do arquivo em Mb: ");
    scanf("%f", &tamanho);
    printf("Velocidade de download em Mb/s: ");
    scanf("%f", &velocidade);

    tempo = (tamanho / velocidade) / 60;
    printf("Tempo aproximado de download: %.2f minutos", tempo);
    return 0;
}