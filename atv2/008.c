#include<stdio.h>

int main()
{
    float salarioAtual, porcentagemReajuste, novoSalario, reajusteFinal;

    printf("Digite salario atual:");
    scanf("%f", &salarioAtual);
    
    printf("Digite a porcentagem de reajuste:");
    scanf("%f", &porcentagemReajuste);

    reajusteFinal = porcentagemReajuste/100;

    novoSalario = (salarioAtual * reajusteFinal) + salarioAtual;

    printf("Novo salario: R$%.2f",novoSalario);

    return 0;
}
