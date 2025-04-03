#include <stdio.h>

int main() {
    int voto = 999;
    int votos1 = 0;
    int votos2 = 0;
    int votos3 = 0;
    int votos4 = 0;
    int votos5 = 0;
    int votos6 = 0;
    int n = 0;

    printf("RELACAO CODIGO - CANDIDATO\n");
    printf("1 - Jose\n");
    printf("2 - Joao\n");
    printf("3 - Maria\n");
    printf("4 - Diego\n");
    printf("5 - Voto nulo\n");
    printf("6 - Voto branco\n\n");

    while(1) {
        printf("Digite o codigo do seu canditado (0 para sair): ");
        scanf("%d", &voto);

        if (voto == 0){
            break;
        }
        if (voto == 1) {
            votos1++;
        }
        if (voto == 2) {
            votos2++;
        }
        if (voto == 3) {
            votos3++;
        }
        if (voto == 4) {
            votos4++;
        }
        if (voto == 5) {
            votos5++;
        }
        if (voto == 6) {
            votos6++;
        }
        if (voto < 0 || voto >= 7) {
            printf("Candidato inexistente...\n");
        }        

        n++;
    }

    float perc_nulo = ((float)votos5/n)*100;
    float perc_branco = ((float)votos6/n)*100;

    printf("\nResultado\n");
    printf("Votos Jose = %d\n", votos1);
    printf("Votos Joao = %d\n", votos2);
    printf("Votos Maria = %d\n", votos3);
    printf("Votos Diego = %d\n", votos4);
    printf("Votos nulos = %d\n", votos5);
    printf("Votos brancos = %d\n", votos6);
    printf("Percentagem de votos nulos = %.2f%%\n", perc_nulo);
    printf("Percentagem de votos brancos = %.2f%%\n", perc_branco);

    return 0;
}