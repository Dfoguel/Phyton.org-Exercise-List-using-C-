#include <stdio.h>

char Pos_Neg(int n) {
    if (n > 0) {
        return 'P';
    } else {
        return 'N';
    }
}

int main() {
    int num;
    char res;
    printf("Digite um numero: ");
    scanf("%d", &num);

    res = Pos_Neg(num);
    printf("Resultado: %c", res);

    return 0;
}