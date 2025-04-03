#include <stdio.h>

int main() {
    int num, i, produto;
    printf("Digite o numero que deseja ver a tabuada: ");
    scanf("%d", &num);
    
    printf("Tabuada de %d:\n", num);

    for (i = 1; i < 11; i++) {
        produto = num * i;
        printf("%d X %d = %d\n", num, i, produto);
    }

    return 0;
}