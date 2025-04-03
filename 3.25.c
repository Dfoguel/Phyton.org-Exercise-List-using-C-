#include <stdio.h> 

int main() {
    int n, idade;
    int soma = 0;
    float media;

    printf("Digite o numero de idades que havera: ");
    scanf("%d", &n);

    for (int i = 1; i < n+1; i++) {
        printf("Digite a idade %d: ", i);
        scanf("%d", &idade);
        soma += idade;
    }    

    media = (float)soma/n;

    printf("Media = %.2f\n", media);

    if (media >= 0 && media <= 25) {
        printf("Turma jovem");
    } else if (media <= 60) {
        printf("Turma adulta");
    } else {
        printf("Turma idosa");
    }

    return 0;
}