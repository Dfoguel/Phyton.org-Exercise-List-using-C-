#include <stdio.h>

int main() {
    int n; 
    int fatorial = 1;
    printf("Fatorial de: ");
    scanf("%d", &n);

    printf ("%d! = ", n);
    int x = n;

    for(int i = 0; i < n; i++) {
        printf("%d . ", x);
        x--;
        fatorial *= n - i;
    }

    printf("= %d", fatorial);

    return 0;
}