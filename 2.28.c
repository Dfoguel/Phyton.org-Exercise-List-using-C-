#include <stdio.h>

int main(){
    float quiloFile, quiloAlcatra, quiloPicanha;
    float preco, precodesconto, quilos, desconto;
    char carne, cartaotabajara;

    //Pede as informações necessárias
    printf("Escreva a carne desejada (F, A ou P): ");
    scanf("%c", &carne);
    printf("Escreva a quantidade de quilos desejada: ");
    scanf("%f", &quilos);
    getchar();
    printf("Possui cartao Tabajara? (S/N)\n");
    scanf("%c", &cartaotabajara);

    //Verifica as condições
    if (carne == 'F') {
        if (quilos <= 5) {
            quiloFile = 4.90;
            preco = quiloFile*quilos;
        } else {
            quiloFile = 5.80;
            preco = quiloFile*quilos;
        }
    } else if (carne == 'A') {
        if (quilos <= 5) {
            quiloAlcatra = 5.90;
            preco = quiloAlcatra*quilos;
        } else {
            quiloAlcatra = 6.80;
            preco = quiloAlcatra*quilos;
        }
    } else if (carne == 'P') {
        if (quilos <= 5) {
            quiloPicanha = 6.90;
            preco = quiloPicanha*quilos;
        } else {
            quiloPicanha = 7.80;
            preco = quiloPicanha*quilos;
        }
    } else {
        printf("Tipo de carne invalido");
        return 0;
    }

    //Verifica se tem cartão tabajara
    if (cartaotabajara == 'S') {
        precodesconto = preco*0.95;
        desconto = preco*0.05;
    } else if (cartaotabajara == 'N') {
        precodesconto = preco;
        desconto = 0.00;
    } else {
        printf ("Digite S ou N para dizer se tem cartao Tabajara");
        return 0;
    }

    //Printa o cupom fiscal
    printf ("\nCUPOM FISCAL\n");
    printf ("Tipo da carne: %c\n", carne);
    printf ("Quilos comprados: %.2f\n", quilos);
    printf ("PreCo total = R$%.2f\n", preco);
    printf ("Possui cartao Tabajara: %c\n", cartaotabajara);
    printf ("Valor do desconto = R$%.2f\n", desconto);
    printf ("Valor total a pagar = R$%.2f\n\n", precodesconto);

    return 0;
}