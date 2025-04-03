#include <stdio.h>
#include <math.h>

int main(){
    float area, litros_necessarios;
    int latastotal, galoestotal;
    float custolatastotal, custogaloestotal, customistura;
    int latas_mistura, galoes_mistura;

    //Valores constantes
    const float cobertura_por_litro = 6.00;
    const float litro_lata = 18.00;
    const float preco_lata = 80.00;
    const float litro_galao = 3.60;
    const float preco_galao = 25.00;

    //Entrada de dados
    printf("Qual o tamanho da area pintada em metros quadrados?\n");
    scanf("%f", &area);

    //Cálculo dos litros totais + folga
    litros_necessarios = area/cobertura_por_litro;
    litros_necessarios = litros_necessarios * 1.10;

    //Se for só lata
    latastotal = ceil(litros_necessarios/litro_lata);
    custolatastotal = latastotal * preco_lata;

    //Se for só galão
    galoestotal = ceil(litros_necessarios/litro_galao);
    custogaloestotal = galoestotal * preco_galao;

    //Se for uma mistura dos dois com mínimo de desperdício
    latas_mistura = litros_necessarios / litro_lata;
    float restante = litros_necessarios - (latas_mistura * litro_lata);
    galoes_mistura = ceil(restante / litro_galao);
    customistura = (latas_mistura * preco_lata) + (galoes_mistura * preco_galao);

    printf("Comprando apenas latas, o comprador deve comprar %d latas e o valor total fica de R$%.2f\n", latastotal, custolatastotal);
    printf("Comprando apenas galoes, o comprador deve comprar %d galoes e o valor total fica de R$%.2f\n", galoestotal, custogaloestotal);
    printf("A melhor mistura de latas e galoes seria de %d latas e %d galoes. Valor total = R$%.2f\n", latas_mistura, galoes_mistura, customistura);
    return 0;
}