#include <stdio.h>

int main() {
    // Variáveis para a estatística de acidentes de trânsito
    int codigoCidade, veiculos, acidentes;
    char estado[3];
    int totalCidades = 0;
    int maiorIndiceAcidentes = -1, menorIndiceAcidentes = -1;
    int codigoCidadeMaior, codigoCidadeMenor;
    int totalVeiculos = 0, totalAcidentesRS = 0;

    do {
        printf("Digite o codigo da cidade, estado, numero de veiculos e numero de acidentes, ou 0 para encerrar: ");
        scanf("%d", &codigoCidade);

        if (codigoCidade != 0) {
            scanf("%s %d %d", estado, &veiculos, &acidentes);

            totalCidades++;
            totalVeiculos += veiculos;

            if (strcmp(estado, "RS") == 0) {
                totalAcidentesRS += acidentes;
            }

            double indiceAcidentes = (double)acidentes / veiculos;

            if (maiorIndiceAcidentes == -1 || indiceAcidentes > maiorIndiceAcidentes) {
                maiorIndiceAcidentes = indiceAcidentes;
                codigoCidadeMaior = codigoCidade;
            }

            if (menorIndiceAcidentes == -1 || indiceAcidentes < menorIndiceAcidentes) {
                menorIndiceAcidentes = indiceAcidentes;
                codigoCidadeMenor = codigoCidade;
            }
        }

    } while (codigoCidade != 0);

    double mediaVeiculos = (double)totalVeiculos / totalCidades;

    double mediaAcidentesRS = (double)totalAcidentesRS / totalCidades;

    printf("\n Resultados Estatistica de Acidentes de Transito \n");
    printf("Maior indice de acidentes: %.2f (Cidade %d)\n", maiorIndiceAcidentes, codigoCidadeMaior);
    printf("Menor indice de acidentes: %.2f (Cidade %d)\n", menorIndiceAcidentes, codigoCidadeMenor);
    printf("Media de veiculos nas cidades brasileiras: %.2f\n", mediaVeiculos);
    printf("Media de acidentes com vitimas nas cidades do Rio Grande do Sul: %.2f\n", mediaAcidentesRS);

    return 0;
}
