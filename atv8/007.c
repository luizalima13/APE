#include <stdio.h>

int main() {
    char nome[50], sexo;
    float altura, peso;
    int numeroHomens = 0, numeroMulheres = 0;
    float somaAlturaHomens = 0, somaAlturaMulheres = 0, somaAlturaGrupo = 0;
    float somaPesoHomens = 0, somaPesoMulheres = 0, somaPesoGrupo = 0;

    for (int i = 1; i <= 10; i++) {
        printf("\nDados da pessoa %d:\n", i);
        printf("Nome: ");
        scanf("%s", nome);

        printf("Sexo (M/m para masculino, F/f para feminino): ");
        scanf(" %c", &sexo);

        printf("Altura (em metros): ");
        scanf("%f", &altura);

        printf("Peso (em quilogramas): ");
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm') {
            numeroHomens++;
            somaAlturaHomens += altura;
            somaPesoHomens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            numeroMulheres++;
            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;
        }

        somaAlturaGrupo += altura;
        somaPesoGrupo += peso;
    }

    float mediaAlturaHomens = numeroHomens > 0 ? somaAlturaHomens / numeroHomens : 0;
    float mediaAlturaMulheres = numeroMulheres > 0 ? somaAlturaMulheres / numeroMulheres : 0;
    float mediaAlturaGrupo = somaAlturaGrupo / 10;

    float mediaPesoHomens = numeroHomens > 0 ? somaPesoHomens / numeroHomens : 0;
    float mediaPesoMulheres = numeroMulheres > 0 ? somaPesoMulheres / numeroMulheres : 0;
    float mediaPesoGrupo = somaPesoGrupo / 10;

    printf("\n******* RESULTADOS *******\n");
    printf("Numero de homens: %d\n", numeroHomens);
    printf("Numero de mulheres: %d\n", numeroMulheres);
    printf("Altura media dos homens: %.2f metros\n", mediaAlturaHomens);
    printf("Altura media das mulheres: %.2f metros\n", mediaAlturaMulheres);
    printf("Altura media do grupo: %.2f metros\n", mediaAlturaGrupo);
    printf("Peso medio dos homens: %.2f kg\n", mediaPesoHomens);
    printf("Peso medio das mulheres: %.2f kg\n", mediaPesoMulheres);
    printf("Peso medio do grupo: %.2f kg\n", mediaPesoGrupo);

    return 0;
}
