#include <stdio.h> 

int main() {
int eleitores;
char voto;
int votos1 = 0;
int votos2 = 0;
int votos3 = 0;

printf("Digite o numero de eleitores: ");
scanf("%d", &eleitores);

for (int i = 0; i < eleitores; i++) {
    printf("Digite o numero do seu candidato (1, 2 ou 3): ");
    scanf(" %c", &voto);
    if(voto == '1') {
        votos1++;
    } else if(voto == '2') {
        votos2++;
    } else if(voto == '3') {
        votos3++;
    } else {
        printf("Voto invalido, nao sera contabilizado");
    }
}

printf("Resultado final:\n");
printf("Votos canditado 1: %d\n", votos1);
printf("Votos canditado 2: %d\n", votos2);
printf("Votos canditado 3: %d\n", votos3);

return 0;

}