#include <stdio.h> 

int main() {
    int n, nota;
    int soma = 0;
    float media;

    printf("Digite o numero de notas que havera: ");
    scanf("%d", &n);

    for (int i = 1; i < n+1; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%d", &nota);
        soma += nota;
    }    

    media = (float)soma/n;

    printf("Media = %.2f", media);

    return 0;
}