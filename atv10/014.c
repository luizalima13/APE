#include <stdio.h>

int main() {
    int vetor[10];
    int valores_iguais[10];
    int contador_iguais = 0;

    printf("Digite 10 valores:\n");

    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                int valor_repetido = 0;
                for (int k = 0; k < contador_iguais; k++) {
                    if (valores_iguais[k] == vetor[i]) {
                        valor_repetido = 1;
                        break;
                    }
                }

                if (!valor_repetido) {
                    valores_iguais[contador_iguais] = vetor[i];
                    contador_iguais++;
                }
            }
        }
    }

    if (contador_iguais > 0) {
        printf("Valores iguais encontrados:\n");
        for (int i = 0; i < contador_iguais; i++) {
            printf("%d\n", valores_iguais[i]);
        }
    } else {
        printf("Nao foram encontrados.\n");
    }

    return 0;
}

