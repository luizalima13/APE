#include <stdio.h>

int main() 
{
    int numeroCarrosVendidos;
    float valorVendas, salarioFixo, valorPorCarro, salarioFinal;
    float comissaoPercentual = 0.05;

    printf("Informe o numero de carros vendidos: ");
    scanf("%d", &numeroCarrosVendidos);

    printf("Informe o valor total das vendas: ");
    scanf("%f", &valorVendas);

    printf("Informe o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Informe o valor por carro vendido: ");
    scanf("%f", &valorPorCarro);

    salarioFinal = salarioFixo + (numeroCarrosVendidos * valorPorCarro) + (valorVendas * comissaoPercentual);

    printf("O salario final do vendedor e: %.2f", salarioFinal);

    return 0;
}
