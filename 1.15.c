#include <stdio.h>

int main(){
    float realhora, horames;
    float bruto, ir, inss, sindicato, liquido;
    printf("Quanto voce ganha por hora?\n");
    scanf("%f", &realhora);
    printf("Quantas horas voce trabalha por mes?\n");
    scanf("%f", &horames);

    bruto = realhora*horames;
    ir = bruto*0.11;
    inss = bruto*0.08;
    sindicato = bruto*0.05;
    liquido = bruto - (ir+inss+sindicato);

    printf("Salario Bruto: R$%.2f\nIR (11%%): R$%.2f\nINSS (8%%): R$%.2f\nSindicato(5%%): R$%.2f\nSalario Liquido: R$%.2f\n", bruto, ir, inss, sindicato, liquido);
}