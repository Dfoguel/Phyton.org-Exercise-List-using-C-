#include <stdio.h>

int main() {
    int n;
    int fatorial;
    char op;

    while(1) {

        printf("Digite 1 para calcular um fatorial ou digite 2 para terminar o programa: ");
        scanf(" %c", &op);
    
        switch(op) {
            case '1':
                fatorial = 1;
                printf("Digite o numero que deseja fatorial: ");
                scanf("%d", &n);

                if (n < 1 || n > 16) {
                    printf("Numero deve estar entre 1 e 16\n");
                    return 0;
                }

                for (int i = 0; i < n; i++) {
                    fatorial *= n-i;
                }
                printf("Resultado = %d\n", fatorial);
                break;
            
            case '2':
                printf("Saindo...\n");
                return 0;
        }
    }

    return 0;
}