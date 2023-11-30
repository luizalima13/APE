#include <stdio.h>

int main() {

    int contadoresElevadores[3] = {0}; 
    int contadoresPeriodos[3] = {0}; 
    int totalServicos = 0;

    for (int i = 0; i < 50; i++) {
        char elevador;
        printf("Digite o elevador mais utilizado pelo morador %d (A, B ou C): ", i + 1);
        scanf(" %c", &elevador);

        char periodo;
        printf("Digite o periodo mais utilizado pelo morador %d (M, V ou N): ", i + 1);
        scanf(" %c", &periodo);

        switch (elevador) {
            case 'A':
                contadoresElevadores[0]++;
                break;
            case 'B':
                contadoresElevadores[1]++;
                break;
            case 'C':
                contadoresElevadores[2]++;
                break;
            default:
                printf("Elevador invalido. Tente novamente.\n");
                i--; 
                continue;
        }

        switch (periodo) {
            case 'M':
                contadoresPeriodos[0]++;
                break;
            case 'V':
                contadoresPeriodos[1]++;
                break;
            case 'N':
                contadoresPeriodos[2]++;
                break;
            default:
                printf("Periodo invalido. Tente novamente.\n");
                i--; 
                continue;
        }

        totalServicos++;
    }

    char periodoMaisUsadoElevador = ' ';
    int maxContadorElevador = 0;
    for (int i = 0; i < 3; i++) {
        if (contadoresElevadores[i] > maxContadorElevador) {
            maxContadorElevador = contadoresElevadores[i];
            periodoMaisUsadoElevador = 'A' + i;
        }
    }

    char elevadorMaisFrequentado = ' ';
    int maxContadorPeriodo = 0;
    for (int i = 0; i < 3; i++) {
        if (contadoresPeriodos[i] > maxContadorPeriodo) {
            maxContadorPeriodo = contadoresPeriodos[i];
            elevadorMaisFrequentado = 'M' + i;
        }
    }

    float diferencaPercentual = ((float)maxContadorPeriodo - contadoresPeriodos[0]) / contadoresPeriodos[0] * 100;
    float percentagemElevadorMedia = (float)contadoresElevadores[1] / totalServicos * 100;

    printf("Periodo mais usado de todos e a que elevador pertence: %c (%c)\n", periodoMaisUsadoElevador, elevadorMaisFrequentado);
    printf("Elevador mais frequentado e em que periodo se concentra o maior fluxo: %c (%c)\n", elevadorMaisFrequentado, periodoMaisUsadoElevador);
    printf("Diferenca percentual entre o mais usado dos horarios e o menos usado: %.2f%%\n", diferencaPercentual);
    printf("Percentagem sobre o total de servicos prestados do elevador de media utilizacao: %.2f%%\n", percentagemElevadorMedia);

    return 0;
}
