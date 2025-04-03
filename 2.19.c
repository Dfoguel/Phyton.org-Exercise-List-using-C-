#include <stdio.h>

int main(){
    int a, centena, dezena, unidade;
    printf("Digite um inteiro positivo menor ou igual a 1000: ");
    scanf("%d", &a);

    centena = a/100;
    dezena = (a - 100*centena)/10;
    unidade = (a - 100*centena - 10*dezena)/1;

    printf("O numero tem %d centenas, %d dezenas e %d unidades", centena, dezena, unidade);

    return 0;
}