#include <stdio.h>

int main() {
    int codigo, quantidade;
    float precoUni, valorFinal;


    printf("Digite o codigo do item: \n");
    scanf("%d", &codigo);

    printf("Digite a quantidade: \n");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 100:
            precoUni = 10.10;
            break;
        case 101:
            precoUni = 8.30;
            break;
        case 102:
            precoUni = 8.50;
            break;
        case 103:
            precoUni = 12.50;
            break;
        case 104:
            precoUni = 13.25;
            break;
        default:
            printf("Item invalido\n");
    }

    valorFinal = precoUni * quantidade;

    printf("Valor da conta e: R$ %.2f\n", valorFinal);

    return 0;
}
