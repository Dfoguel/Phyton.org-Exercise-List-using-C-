#include <stdio.h>

int main(){
    int saque, NotasCem, NotasCinquenta, NotasDez, NotasCinco, NotasUm;
    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    if (saque < 10 || saque > 600){
        printf("Valor invalido");
        return 0;
    }

    NotasCem = saque/100;
    NotasCinquenta = (saque - 100*NotasCem)/50;
    NotasDez = (saque - 100*NotasCem - 50*NotasCinquenta)/10;
    NotasCinco = (saque - 100*NotasCem - 50*NotasCinquenta - 10*NotasDez)/5;
    NotasUm = (saque - 100*NotasCem - 50*NotasCinquenta - 10*NotasDez - 5*NotasCinco)/1;

    printf("Notas: %d notas 100, %d notas 50, %d notas 10, %d notas 5, %d notas 1", NotasCem, NotasCinquenta, NotasDez, NotasCinco, NotasUm);

    return 0;
}