#include <stdio.h>

int validaQuantidade(int quantidade) {
    while (quantidade < 0) {
        printf("Quantidade de pecas invalida. Digite novamente: ");
        scanf("%d", &quantidade);
    }
    return quantidade;
}

float calculaSalario(int quantidade) {
    const float salarioBase = 600.0;
    const int limite1 = 50;
    const int limite2 = 80;
    const float adicional1 = 0.50;
    const float adicional2 = 0.75;

    float adicionalProdutividade = 0.0;

    if (quantidade > limite1 && quantidade <= limite2) {
        adicionalProdutividade = (quantidade - limite1) * adicional1;
    } else if (quantidade > limite2) {
        adicionalProdutividade = (limite2 - limite1) * adicional1 + (quantidade - limite2) * adicional2;
    }

    return salarioBase + adicionalProdutividade;
}

void mostraFinal(int quantidade, float salario) {
    printf("Quantidade de pecas fabricadas: %d\n", quantidade);
    printf("Salario total: R$ %.2f\n", salario);
}

int main() {
    int quantidade;
    char resposta;

    do {
        printf("Digite a quantidade de pecas fabricadas pelo funcionario ou -1 para encerrar: ");
        scanf("%d", &quantidade);

        if (quantidade >= 0) {
            quantidade = validaQuantidade(quantidade);

            float salario = calculaSalario(quantidade);

            mostraFinal(quantidade, salario);

            printf("Deseja calcular para outro funcionario? (S para Sim, N para Nao): ");
            scanf(" %c", &resposta);

        } else {
            resposta = 'N'; 
        }

    } while (resposta == 'S');

    return 0;
}

