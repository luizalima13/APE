#include <stdio.h>

int main() {
    const int tamanho = 8;
    int vetor[tamanho];

    printf("Digite %d valores para preencher o vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int x, y;
    printf("\nDigite dois valores X e Y (entre 1 e %d): ", tamanho);
    scanf("%d %d", &x, &y);

    if (x >= 1 && x <= tamanho && y >= 1 && y <= tamanho) {
        int soma = vetor[x - 1] + vetor[y - 1];
        printf("\nA soma dos valores nas posicoes %d e %d é: %d\n", x, y, soma);
    } else {
        printf("\nPosicoes invalidas. Certifique-se de que X e Y estao entre 1 e %d.\n", tamanho);
    }

    return 0;
}
