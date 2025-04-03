#include <stdio.h>

int main(){
    float soma, media, notas[4];
    for (int i = 0;i < 4; ++i){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    
    for (int i = 0; i < 4; ++i){
        soma += notas[i];
    }
    media = soma/4;
    printf("O resultado da media ficou: %.2f", media);

    return 0;
}