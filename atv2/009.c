#include<stdio.h>

int main() 
{
    float custoFabrica, custoFinal;
    float percentualDistribuidor = 0.28;
    float percentualImpostos = 0.45;

    printf("Informe o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    custoFinal = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * percentualImpostos);

    printf("O custo final do carro ao consumidor e: %.2f", custoFinal);

    return 0;
}
