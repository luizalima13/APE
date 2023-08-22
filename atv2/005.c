#include<stdio.h>

int main(){

    float custo, frete , despesa, valorBruto, valorVenda, lucro;

    printf("\n Digite o custo do produto: ");
    scanf("%f", &custo);

    printf("Digite o frete do produto: ");
    scanf("%f", frete);

    printf("Digite a despesa do produto: ");
    scanf("%f", &despesa);
    
    valorBruto = custo + frete + despesa;

    printf("\n O valor bruto do produto e: R$%.2f \n Digite o valor da venda: ", valorBruto);
    scanf("%f", &valorVenda);

    lucro = ((valorVenda - valorBruto)*100)/valorBruto;

    printf("\n Sua porcentagem de lucro e: %.2f", lucro);

    return 0;
}
