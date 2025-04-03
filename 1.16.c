#include <stdio.h>

int main(){
    float area, litros_necessarios;
    float latastotal;
    float valortotal;

    //Valores constantes
    const float litro_lata = 18.00;
    const float preco_lata = 80.00;
    const float cobertura_por_litro = 3.00;

    //Entrada de dados
    printf("Qual o tamanho da area pintada em metros quadrados?\n");
    scanf("%f", &area);

    //Cálculos
    litros_necessarios = area/cobertura_por_litro;
    latastotal = litros_necessarios / litro_lata;
    printf("Total de latas sem arredondar = %f\n", latastotal);

    //Arredonda pra cima sem a função "ceil" da math.h
    //Traduzindo: Se o valor float de latastotal for diferente do valor dele transformado pra inteiro, substitui o float pelo inteiro logo acima
    if ((float)latastotal != (int)latastotal){
        latastotal = (int)latastotal + 1;
    }

    //Cálculo do preço total
    valortotal = preco_lata * latastotal;

    printf("O comprador deve comprar %f latas\n", latastotal);
    printf("O valor total fica de R$%.2f", valortotal);
    return 0;
}