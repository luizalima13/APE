#include <stdio.h>

int main() {
    const int tamanho = 10;
    int vetor[tamanho];

    printf("Digite %d valores para preencher o vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int contPares = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            contPares++;
        }
    }

    printf("\nO vetor possui %d valores pares.\n", contPares);

    return 0;
}
