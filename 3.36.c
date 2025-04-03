#include <stdio.h>

int main() {
    int tab, inic, fim;
    printf("Montar a tabuada de: ");
    scanf("%d", &tab);
    printf("Comecar por: ");
    scanf("%d", &inic);
    printf("Terminar em: ");
    scanf("%d", &fim);

    if(inic > fim) {
        printf("O numero inicial deve ser menor que o numero final...");
        return 0;
    }

    printf("\nVou montar a tabuada de %d comecando em %d e terminando em %d:\n", tab, inic, fim);

    for(int i = inic; i < fim+1; i++) {
        int result = tab * i;
        printf("%d X %d = %d\n", tab, i, result);
    }

    return 0;
}