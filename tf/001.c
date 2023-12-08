#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

typedef struct Carro {
    char dono[50];
    int combustivel;
    char modelo[50];
    char cor[20];
    int chassi;
    int ano;
    char placa[8];

    struct Carro *prox;
} Carro;

Carro *criarListaVazia();
Carro *criarCarro();
int validarPlaca(const char placa[]);
Carro *cadastrar(Carro *lista);
void imprimirLista(const Carro *lista);
Carro *pesquisar(const Carro *lista, int chassiPesquisa);
void alterar(Carro *encontrado);
Carro *excluir(Carro *lista, int chassiPesquisa);
void liberarLista(Carro *lista);
void carroDiesel(const Carro *lista);
void placaJota(const Carro *lista);
void placaComVogalEPar(const Carro *lista);
void placaSemZero(Carro *lista);

int main() {
    Carro *lista = criarListaVazia();
    Carro *encontrado;

    int opcao, chassiPesquisa;

    do {
        printf("\n\n|                          CADASTRO                          |\n");
        printf("---------------------------------------------------------------------\n");
        printf("|  1 - Cadastrar veiculo\n");
        printf("|  2 - Mostrar veiculo\n");
        printf("|  3 - Pesquisar\n");
        printf("|  4 - Alterar\n");
        printf("|  5 - Excluir\n");
        printf("|  6 - Veiculo fabricado depois de 2009 que a diesel\n");
        printf("|  7 - Placas que inicial com J e terminam com 0, 2, 4 ou 7 \n");
        printf("|  8 - Placas onde a segunda letra e vogal e a soma dos numeros resulta em par\n");
        printf("|  9 - Trocar dono para o carro com a placa sem numero 0\n");
        printf("|  0 - SAIR\n");
        printf("---------------------------------------------------------------------\n");
        printf("                        Opcao escolhida: ");
        scanf("%d", &opcao);
        printf("---------------------------------------------------------------------\n");

        switch (opcao) {
            case 1:
                lista = cadastrar(lista);
                break;

            case 2:
                imprimirLista(lista);
                break;

            case 3:
                printf("Informe o chassi:");
                scanf("%d", &chassiPesquisa);
                encontrado = pesquisar(lista, chassiPesquisa);
                break;

            case 4:
                printf("Chassi para ser alterado:");
                scanf("%d", &chassiPesquisa);
                encontrado = pesquisar(lista, chassiPesquisa);

                if (encontrado != NULL) {
                    alterar(encontrado);
                }
                break;

            case 5:
                printf("Chassi para ser excluido:");
                scanf("%d", &chassiPesquisa);
                lista = excluir(lista, chassiPesquisa);
                break;

            case 6:
                carroDiesel(lista);
                break;

            case 7:
                placaJota(lista);
                break;

            case 8:
                placaComVogalEPar(lista);
                break;

            case 9:
                placaSemZero(lista);
                break;

            default:
                break;
        }

    } while (opcao != 0);

    liberarLista(lista);

    return 0;
}

Carro *criarListaVazia() {
    return NULL;
}

Carro *criarCarro() {
    Carro *novoCarro = (Carro *)malloc(sizeof(Carro));
    if (novoCarro == NULL) {
        printf("Erro");
        exit(EXIT_FAILURE);
    }

    novoCarro->prox = NULL;

    return novoCarro;
}

int validarPlaca(const char placa[]) {
    if (strlen(placa) != 7) {
        printf("A placa precisa ter exatamente 7.\n");
        return 0;
    }

    for (int i = 0; i < 3; i++) {
        if (!isalpha(placa[i])) {
            printf("Os 3 primeiros precisam ser letras.\n");
            return 0;
        }
    }

    for (int i = 3; i < 7; i++) {
        if (!isdigit(placa[i])) {
            printf("Os 4 ultimos precisam ser numeros.\n");
            return 0;
        }
    }

    return 1;
}

Carro *cadastrar(Carro *lista) {
    Carro *novoCarro = criarCarro();
    srand(time(NULL));
    novoCarro->chassi = rand() % 1000;

    printf("Dono do carro:");
    fflush(stdin);
    fgets(novoCarro->dono, sizeof(novoCarro->dono), stdin);
    fflush(stdin);

    do {
        printf("\n\n|                     Combustivel                     |\n");
        printf("\n| 1-alcool");
        printf("\n| 2-diesel");
        printf("\n| 3-gasolina");
        scanf("%d", &novoCarro->combustivel);
        fflush(stdin);
    } while ((novoCarro->combustivel != 1) && (novoCarro->combustivel != 2) && (novoCarro->combustivel != 3));

    printf("Modelo: ");
    fflush(stdin);
    fgets(novoCarro->modelo, sizeof(novoCarro->modelo), stdin);
    fflush(stdin);

    printf("Cor: ");
    fflush(stdin);
    fgets(novoCarro->cor, sizeof(novoCarro->cor), stdin);
    fflush(stdin);

    do {
        printf("Data de fabricacao ");
        scanf("%d", &novoCarro->ano);
    } while ((novoCarro->ano < 1950) || (novoCarro->ano > 2024));

    do {
        printf("Placa: ");
        fflush(stdin);
        scanf("%7s", novoCarro->placa);
        fflush(stdin);

    } while (!validarPlaca(novoCarro->placa));

    if (lista == NULL) {
        return novoCarro;

    } else {
        Carro *atual = lista;

        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = novoCarro;

        return lista;
    }
}

void imprimirLista(const Carro *lista) {
    const Carro *atual = lista;

    if (atual == NULL) {
        printf("\n   --- LISTA VAZIA ---\n");
        return;

    } else {

        while (atual != NULL) {
            printf("\n|Chassi: %d\n", atual->chassi);
            printf("\n|Proprietario: %s", atual->dono);
            if (atual->combustivel == 1) {
                printf("  Combustivel: alcool\n");
            } else if (atual->combustivel == 2) {
                printf("  Combustivel: diesel\n");
            } else if (atual->combustivel == 3) {
                printf("  Combustivel: gasolina\n");
            }
            printf("\n|Modelo: %s", atual->modelo);
            printf("\n|Cor: %s", atual->cor);
            printf("\n|Ano: %d\n", atual->ano);
            printf("\n|Placa: %s\n", atual->placa);

            atual = atual->prox;
        }
    }
}

Carro *pesquisar(const Carro *lista, int chassiProcura) {
    const Carro *atual = lista;

    if (atual == NULL) {
        printf("\n   --- LISTA VAZIA ---\n");
        return NULL;

    } else {
        while (atual != NULL) {
            if (atual->chassi == chassiProcura) {
                printf("\n--------   CHASSI %d   --------\n", atual->chassi);
                printf(" Proprietario: %s", atual->dono);
                if (atual->combustivel == 1) {
                    printf("  Combustivel: alcool\n");
                } else if (atual->combustivel == 2) {
                    printf("  Combustivel: diesel\n");
                } else if (atual->combustivel == 3) {
                    printf("  Combustivel: gasolina\n");
                }
                printf("\n|Modelo: %s", atual->modelo);
                printf("\n|Cor: %s", atual->cor);
                printf("\n|Ano: %d\n", atual->ano);
                printf("\n|Placa: %s\n", atual->placa);

                return (Carro *)atual;
            }

            atual = atual->prox;
        }

        printf("\n O carro nao foi achado no sistema\n");

        return NULL;
    }
}

void alterar(Carro *encontrado) {
    printf("\n-----------------------------------------------------------------\n");
    printf("   Novo proprietario --> ");
    fflush(stdin);
    fgets(encontrado->dono, sizeof(encontrado->dono), stdin);
    fflush(stdin);

    printf("\n|Novo combustivel (1-alcool, 2-diesel, 3-gasolina):");
    scanf("%d", &encontrado->combustivel);

    printf("\n| Modelo novo");
    fflush(stdin);
    fgets(encontrado->modelo, sizeof(encontrado->modelo), stdin);
    fflush(stdin);

    printf("\n| Cor nova: ");
    fflush(stdin);
    fgets(encontrado->cor, sizeof(encontrado->cor), stdin);
    fflush(stdin);

    printf("\n| Ano novo:");
    scanf("%d", &encontrado->ano);

    printf("\n| Placa: ");
    fflush(stdin);
    fgets(encontrado->placa, sizeof(encontrado->placa), stdin);
    fflush(stdin);

    printf("\n");
}

Carro *excluir(Carro *lista, int chassiPesquisa) {
    Carro *atual = lista;
    Carro *anterior = NULL;

    while ((atual != NULL) && (atual->chassi != chassiPesquisa)) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual != NULL) {
        if (anterior != NULL) {
            anterior->prox = atual->prox;

        } else {
            lista = atual->prox;
        }

        free(atual);

        printf("\n   O carro foi excluido com sucesso\n\n");

    } else {
        printf("\n   Nao encontrado\n");
    }

    return lista;
}

void liberarLista(Carro *lista) {
    Carro *atual = lista;
    Carro *proximaCarro;

    while (atual != NULL) {
        proximaCarro = atual->prox;
        free(atual);
        atual = proximaCarro;
    }
}

void carroDiesel(const Carro *lista) {
    int condicao = 0;
    const Carro *atual = lista;

    if (atual == NULL) {
        printf("\n   \n");
        return;

    } else {
        printf("Proprietarios de carros do ano de 2010 ou depois a diesel:\n");
        while (atual != NULL) {
            if ((atual->ano > 2009) && (atual->combustivel == 2)) {
                printf("     %s", atual->dono);
                condicao++;
            }
            atual = atual->prox;
        }

        if (condicao == 0) {
            printf("\n   Nenhum carro encontrado\n");
        }
    }
}

void placaJota(const Carro *lista) {
    int condicao = 0;
    const Carro *atual = lista;

    if (atual == NULL) {
        printf("\n   \n");
        return;

    } else {
        printf("Proprietarios de carros com placas que comecam com J e terminam com 0, 2, 4 ou 7:\n");
        while (atual != NULL) {
            if (((atual->placa[0] == 'J') || (atual->placa[0] == 'j')) && ((atual->placa[6] == '0') || (atual->placa[6] == '2') || (atual->placa[6] == '4') || (atual->placa[6] == '7'))) {
                printf("    Proprietario: %s    Placa: %s\n\n", atual->dono, atual->placa);
                condicao++;
            }
            atual = atual->prox;
        }

        if (condicao == 0) {
            printf("\n  Nao existe nenhum carro\n");
        }
    }
}

void placaComVogalEPar(const Carro *lista) {
    int condicao = 0;
    const Carro *atual = lista;

    if (atual == NULL) {
        printf("\n   \n");
        return;

    } else {
        printf("Modelo e cor de carros cujas placas possuem vogal na segunda letra e a soma dos numeros seja par:\n");
        while (atual != NULL) {
            if (strchr("aeiouAEIOU", atual->placa[1]) != NULL) {
                int somaNumeros = 0;

                for (int i = 3; i < 7; i++) {
                    somaNumeros += atual->placa[i];
                }
                if (somaNumeros % 2 == 0) {
                    printf("    Modelo: %s    Cor: %s    Placa: %s\n\n", atual->modelo, atual->cor, atual->placa);
                }

                condicao++;
            }
            atual = atual->prox;
        }

        if (condicao == 0) {
            printf("\n  Nenhum carro\n");
        }
    }
}

void placaSemZero(Carro *lista) {
    int condicao = 0, chassiTroca;

    Carro *atual = lista;

    if (atual == NULL) {
        printf("\n \n");
        return;

    } else {
        printf("\nDigite o chassi do carro que vai trocar o dono");
        scanf("%d", &chassiTroca);

        while (atual != NULL) {
            if (chassiTroca == atual->chassi) {

                if ((atual->placa[3] != '0') && (atual->placa[4] != '0') && (atual->placa[5] != '0') && (atual->placa[6] != '0')) {
                    printf("\n   CHASSI %d   \n", atual->chassi);
                    printf(" Proprietario: %s", atual->dono);
                    if (atual->combustivel == 1) {
                        printf("  Combustivel: alcool\n");
                    } else if (atual->combustivel == 2) {
                        printf("  Combustivel: diesel\n");
                    } else if (atual->combustivel == 3) {
                        printf("  Combustivel: gasolina\n");
                    }
                    printf("\n|Modelo: %s", atual->modelo);
                    printf("\n|Cor: %s", atual->cor);
                    printf("\n|Ano: %d\n", atual->ano);
                    printf("\n|Placa: %s\n\n", atual->placa);

                    printf("\n| Novo dono:");
                    fflush(stdin);
                    fgets(atual->dono, sizeof(atual->dono), stdin);
                    fflush(stdin);

                    return;

                } else {
                    printf("\n A placa tem 0.\n");
                    return;
                }

                condicao++;
            }
            atual = atual->prox;
        }

        if (condicao == 0) {
            printf("\n Nenhum carro foi encontrado\n");
        }
    }
}
