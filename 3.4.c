#include <stdio.h>

int main() {
    float popA = 80000; 
    float popB = 200000;
    const float taxaA = 1.03; //+3,0%
    const float taxaB = 1.015; //+1,5%
    int anos = 0;

    while(1) {
        anos++;
        popA *= taxaA;
        popB *= taxaB;

        if (popA >= popB) {
            printf("Passou-se %d anos para a populacao de A ser maior que a de B", anos);
            break;
        }
    }

    return 0;
}