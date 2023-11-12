#include <stdio.h>

int main() {
    float salario, mediaSalario, mediaFilhos, maiorSalario;
    int numFilhos, totalPessoas = 0, pessoasAte100 = 0;

    mediaSalario = mediaFilhos = maiorSalario = 0;

    do {
        printf("Digite o salário (digite um valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario < 0) {
            break;
        }

        printf("Digite o número de filhos: ");
        scanf("%d", &numFilhos);

        totalPessoas++;
        mediaSalario += salario;
        mediaFilhos += numFilhos;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100) {
            pessoasAte100++;
        }

    } while (salario >= 0);

    if (totalPessoas > 0) {
        mediaSalario /= totalPessoas;
        mediaFilhos /= totalPessoas;
    }

    printf("\n--- Resultados ---\n");
    printf("a) Média do salário da população: %.2f\n", mediaSalario);
    printf("b) Média do número de filhos: %.2f\n", mediaFilhos);
    printf("c) Maior salário: %.2f\n", maiorSalario);
    
    if (totalPessoas > 0) {
        float percentualAte100 = (float)pessoasAte100 / totalPessoas * 100;
        printf("d) Percentual de pessoas com salário até R$100,00: %.2f%%\n", percentualAte100);
    } else {
        printf("d) Nenhum dado válido foi inserido.\n");
    }

    return 0;
}
