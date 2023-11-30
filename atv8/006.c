#include <stdio.h>

int main() {
    char resposta;
    do {
        int mes, ano, diasNoMes;

        printf("Digite o mes (1 a 12): ");
        scanf("%d", &mes);

        printf("Digite o ano: ");
        scanf("%d", &ano);

        int bissexto = ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0);

        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                diasNoMes = 31;
                break;
            case 4: case 6: case 9: case 11:
                diasNoMes = 30;
                break;
            case 2:
                diasNoMes = bissexto ? 29 : 28;
                break;
            default:
                printf("Mes invalido.\n");
                continue; 
        }

        printf("O mes %d do ano %d tem %d dias.\n", mes, ano, diasNoMes);

        printf("VOCE DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    printf("Programa encerrado.\n");

    return 0;
}
