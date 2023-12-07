#include <stdio.h>

int main() {
    int vetor[100];
    int contador = 0;
    int numero = 1;

    while (contador < 100) {
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[contador] = numero;
            contador++;
        }
        numero++;
    }

    printf("Vetor dos 100 primeiros naturais que nao sao multiplos de 7 ou que terminam com 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
