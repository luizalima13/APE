#include<stdio.h>

int main(int argc, char const *argv[])
{
    float reais, cotacaoDolar, valorDolar;

    printf("\n Digite o valor em reais:");
    scanf("%f", &reais);

    printf("\n Digite a cotacao:");
    scanf("%f", &cotacaoDolar);

    valorDolar = reais/cotacaoDolar;
    printf("\n O valor em dolar e:%.2f",valorDolar);

    
    
    return 0;
}
