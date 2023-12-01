#include <stdio.h>

int main() {
    const int tamanho = 10;
    int vetor[tamanho];

    printf("Digite %d valores para preencher o vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int menor = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        } else if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("\nO maior elemento do vetor e: %d\n", maior);
    printf("O menor elemento do vetor e: %d\n", menor);

    return 0;
}
