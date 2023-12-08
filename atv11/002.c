#include <stdio.h>

void imprimirMesEQuantidadeDias(int numeroMes) {
    if (numeroMes >= 1 && numeroMes <= 12) {
        char *nomesMeses[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
                              "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

        int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


        printf("Mes: %s\n", nomesMeses[numeroMes - 1]);
        printf("Quantidade de dias: %d\n", diasPorMes[numeroMes - 1]);
    } else {
        printf("Numero de mes invalido. Por favor, digite um numero entre 1 e 12.\n");
    }
}

int main() {
    int numeroMes;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &numeroMes);

    imprimirMesEQuantidadeDias(numeroMes);

    return 0;
}
