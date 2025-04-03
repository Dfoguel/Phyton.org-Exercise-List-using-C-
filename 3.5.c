#include <stdio.h>

int main() {
    float popA; 
    float popB;
    float taxaA;
    float taxaB;
    int anos = 0;

    printf("Digite a populacao do pais A: ");
    scanf("%f", &popA);
    printf("Digite a populacao do pais B: ");
    scanf("%f", &popB);
    printf("Digite a taxa de crescimento anual do pais A (em %%): ");
    scanf("%f", &taxaA);
    printf("Digite a taxa de crescimento anual do pais B (em %%): ");
    scanf("%f", &taxaB);

    taxaA = 1 + (taxaA/100);
    taxaB = 1 + (taxaB/100);

    if (popA > popB && taxaA > taxaB) {
        printf("Populacao de B nunca alcancara a de A");
        return 0;
    }

    if (popB > popA && taxaB > taxaA) {
        printf("Populacao de A nunca alcancara a de B");
        return 0;
    }
    

    while(popA < popB) {
        anos++;
        popA *= taxaA;
        popB *= taxaB;

        if (popA >= popB) {
            printf("1. Passou-se %d anos para as populacoes ficassem iguais ou se ultrapasassem", anos);
            return 0;
        }
    }

    while(popB < popA) {
        anos++;
        popB *= taxaB;
        popA *= taxaA;

        if (popB >= popA) {
            printf("2. Passou-se %d anos para as populacoes ficassem iguais ou se ultrapasassem", anos);
            return 0;
        }
    }

    return 0;
}