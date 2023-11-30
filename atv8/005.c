#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[40];
    int idade, voto;
    char sexo, valSexo[10];
    int cont_M = 0, cont_F = 0;
    int sam = 0, alex = 0, dzsenifer = 0, amandine = 0, marta = 0;
    int entrevistados = 0;
    int continua;

    do {
        printf("Nome --> ");
        fgets(nome, sizeof(nome), stdin);
        fflush(stdin);

        do {
            printf("Idade --> ");
            scanf("%d", &idade);

            if (idade <= 12) {
                printf("Idade inválida. Deve ser maior que 12.\n");
            }

        } while (idade <= 12);

        do {
            printf("Sexo (M - Masculino | F - Feminino) --> ");
            scanf(" %c", &sexo);

            switch (sexo) {
            case 'M':
            case 'm':
                strcpy(valSexo, "Masculino");
                cont_M++;
                break;
            case 'F':
            case 'f':
                strcpy(valSexo, "Feminino");
                cont_F++;
                break;
            default:
                printf("Sexo invalido. Tente novamente.\n");
                break;
            }

            fflush(stdin);
        } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

        do {
            printf("\n------------ JOGADORA ------------\n");
            printf(" 1- Sam Kerr (Austrália) \n");
            printf(" 2- Alex Morgan (Estados Unidos) \n");
            printf(" 3- Dzsenifer Marozsan (Alemanha) \n");
            printf(" 4- Amandine Henry (França) \n");
            printf(" 5- Marta Vieira (Brasil) \n");
            printf("----------------------------------\n");
            printf("Voto --> ");
            scanf("%d", &voto);

            switch (voto) {
            case 1:
                sam++;
                break;
            case 2:
                alex++;
                break;
            case 3:
                dzsenifer++;
                break;
            case 4:
                amandine++;
                break;
            case 5:
                marta++;
                break;
            default:
                printf("Voto invalido. Tente novamente.\n");
                break;
            }
        } while (voto < 1 || voto > 5);

        entrevistados++;

        if (entrevistados >= 50 && entrevistados <= 300) {
            printf("\n\nContinuar com a pesquisa (Digite 1 para encerrar)? ");
            scanf("%d", &continua);
            fflush(stdin);
        } else if (entrevistados > 300) {
            continua = 1;
        } else if (entrevistados < 50) {
            continua = 0;
        }

    } while (continua != 1);

    printf("\n----- FIM DA PESQUISA -----\n");

    printf("\n******* RESULTADO *******\n");
    printf(" Sam Kerr --> %d\n", sam);
    printf(" Alex Morgan --> %d \n", alex);
    printf(" Dzsenifer Marozsan --> %d \n", dzsenifer);
    printf(" Amandine Henry --> %d \n", amandine);
    printf(" Marta Vieira --> %d \n", marta);
    printf("*************************\n");

    int maisVotada = 1;
    int maisVotos = sam;

    if (alex > maisVotos) {
        maisVotada = 2;
        maisVotos = alex;
    }
    if (dzsenifer > maisVotos) {
        maisVotada = 3;
        maisVotos = dzsenifer;
    }
    if (amandine > maisVotos) {
        maisVotada = 4;
        maisVotos = amandine;
    }
    if (marta > maisVotos) {
        maisVotada = 5;
        maisVotos = marta;
    }

    printf("\nA jogadora mais votada foi: ");
    switch (maisVotada) {
    case 1:
        printf("Sam Kerr\n");
        break;
    case 2:
        printf("Alex Morgan\n");
        break;
    case 3:
        printf("Dzsenifer Marozsan\n");
        break;
    case 4:
        printf("Amandine Henry\n");
        break;
    case 5:
        printf("Marta Vieira\n");
        break;
    default:
        printf("Erro ao determinar a jogadora mais votada.\n");
        break;
    }

    printf("\nQuantidade de mulheres que participaram da pesquisa: %d\n", cont_F);

    return 0;
}
