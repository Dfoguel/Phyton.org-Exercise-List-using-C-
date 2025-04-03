#include <stdio.h>

int main() {
    int n; 
    int num1 = 0; 
    int num2 = 1;
    int num3; 

    printf("Digite ate qual termo da sequencia de Fibonacci desejas: ");
    scanf("%d", &n);

    printf("%d %d ", num1, num2);

    for (int i = 0; i < n; i++) {
        num3 = num1 + num2;
        printf("%d ", num3);
        num1 = num2;
        num2 = num3;
    }

    return 0;
}