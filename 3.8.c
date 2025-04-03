#include <stdio.h>

int main (){
    int nums[5];
    float media;
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &nums[i]);
        soma += nums[i];
    }

    media = (float) soma/5;

    printf("Soma = %d\n", soma);
    printf("Media = %.2f\n", media);

    return 0;
}