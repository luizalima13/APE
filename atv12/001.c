#include <stdio.h>
#include <math.h>

void imprimirOpcoes() {
    printf("Opcoes de Pagamento:\n");
    printf("a) A vista com 10%% de desconto\n");
    printf("b) Em duas vezes (preço da etiqueta)\n");
    printf("c) De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");
}

char solicitarOpcao() {
    char opcao;
    printf("Escolha a opcao de pagamento (a, b ou c): ");
    scanf(" %c", &opcao);
    return opcao;
}

void calcularPrestacoesAVista(float totalGasto) {
    float valorComDesconto = totalGasto * 0.9;
    printf("O valor total com 10%% de desconto e: R$ %.2f\n", valorComDesconto);
}

void calcularPrestacoesDuasVezes(float totalGasto) {
    printf("O valor total em duas vezes e: R$ %.2f\n", totalGasto);
}

void calcularPrestacoesParceladas(float totalGasto, int numeroParcelas) {
    if (totalGasto > 100.00) {
        float taxaJuros = 0.03;
        float taxaDecimal = taxaJuros / 100.0;
        float parcela = totalGasto * (taxaDecimal / (1 - pow(1 / (1 + taxaDecimal), numeroParcelas)));
        printf("O valor total parcelado em %d vezes com 3%% de juros ao mes e: R$ %.2f\n", numeroParcelas, parcela);
    } else {
        printf("Opcao indisponivel para compras abaixo de R$ 100,00.\n");
    }
}

int main() {
    float totalGasto;
    char opcao;

    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &totalGasto);

    imprimirOpcoes();
    opcao = solicitarOpcao();

    switch (opcao) {
        case 'a':
            calcularPrestacoesAVista(totalGasto);
            break;
        case 'b':
            calcularPrestacoesDuasVezes(totalGasto);
            break;
        case 'c': {
            int numeroParcelas;
            printf("Digite o numero de parcelas desejado (de 3 ate 10): ");
            scanf("%d", &numeroParcelas);
            calcularPrestacoesParceladas(totalGasto, numeroParcelas);
            break;
        }
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}

