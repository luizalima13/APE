#include <stdio.h>

int main() {
    int quantidadeOtimo = 0, quantidadeBom = 0, quantidadeRegular = 0, quantidadeRuim = 0, quantidadePessimo = 0;
    int somaIdadeRuim = 0, maiorIdadePessimo = 0, maiorIdadeOtimo = 0, maiorIdadeRuim = 0;

    for (int i = 0; i < 100; i++) {
        int idade;
        printf("Digite a idade do espectador %d: ", i + 1);
        scanf("%d", &idade);

        char opiniao;
        printf("A - Otimo, B - Bom, C - Regular, D - Ruim, E - Pessimo %d: \n", i + 1);
        scanf(" %c", &opiniao);

        switch (opiniao) {
            case 'A':
                quantidadeOtimo++;
                if (idade > maiorIdadeOtimo) {
                    maiorIdadeOtimo = idade;
                }
                break;
            case 'B':
                quantidadeBom++;
                break;
            case 'C':
                quantidadeRegular++;
                break;
            case 'D':
                quantidadeRuim++;
                somaIdadeRuim += idade;
                if (idade > maiorIdadeRuim) {
                    maiorIdadeRuim = idade;
                }
                break;
            case 'E':
                quantidadePessimo++;
                if (idade > maiorIdadePessimo) {
                    maiorIdadePessimo = idade;
                }
                break;
            default:
                printf("Opiniao invalida. Tente novamente.\n");
                i--;
                break;
        }
    }

    float diferencaPercentual = ((float)quantidadeBom - quantidadeRegular) / quantidadeRegular * 100;
    float mediaIdadeRuim = quantidadeRuim > 0 ? (float)somaIdadeRuim / quantidadeRuim : 0;
    float percentualPessimo = (float)quantidadePessimo / 100 * 100;
    int diferencaIdadeOtimoRuim = maiorIdadeOtimo - maiorIdadeRuim;

    printf("Quantidade de respostas otimo: %d\n", quantidadeOtimo);
    printf("Diferenca percentual entre respostas bom e regular: %.2f%%\n", diferencaPercentual);
    printf("Media de idade das pessoas que responderam ruim: %.2f\n", mediaIdadeRuim);
    printf("Porcentagem de respostas pessimo: %.2f%% (Maior idade: %d)\n", percentualPessimo, maiorIdadePessimo);
    printf("Diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim: %d\n", diferencaIdadeOtimoRuim);

    return 0;
}
