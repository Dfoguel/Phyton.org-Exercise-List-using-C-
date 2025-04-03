#include <stdio.h>

int main() {
    int n; 
    long long int num1 = 0; 
    long long int num2 = 1;
    long long int num3; 

    printf("Digite ate qual termo da sequencia de Fibonacci desejas (maior que 500): ");
    scanf("%d", &n);

    printf("%lld %lld ", num1, num2);

    for (int i = 0; i < n; i++) {
        num3 = num1 + num2;
        printf("%lld ", num3);
        num1 = num2;
        num2 = num3;
    }

    return 0;
}