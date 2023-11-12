#include <stdio.h>

int main() {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosEmBranco = 0, voto;

    do {
        printf("Digite o codigo do candidato (1 a 4), 5 para voto nulo, 6 para voto em branco, ou 0 para encerrar: ");
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosEmBranco++;
                break;
            default:
                if (voto != 0) {
                    printf("Codigo invalido. Tente novamente.\n");
                }
        }

    } while (voto != 0);

    printf("\n--- Resultados Eleicao Presidencial ---\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Votos Nulos: %d votos\n", votosNulos);
    printf("Votos em Branco: %d votos\n", votosEmBranco);

    return 0;
}
