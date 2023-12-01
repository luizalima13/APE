#include <stdio.h>

int main() {
    const int numValores = 5;
    float valores[numValores];

    printf("Digite 5 valores:\n");
    for (int i = 0; i < numValores; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    int posicaoMaior = 0;
    int posicaoMenor = 0;

    for (int i = 1; i < numValores; i++) {
        if (valores[i] > valores[posicaoMaior]) {
            posicaoMaior = i;
        }

        if (valores[i] < valores[posicaoMenor]) {
            posicaoMenor = i;
        }
    }

    printf("\nValores lidos:\n");
    for (int i = 0; i < numValores; i++) {
        printf("%.2f ", valores[i]);
    }

    printf("\nPosicao do maior valor: %d\n", posicaoMaior + 1);
    printf("Posicao do menor valor: %d\n", posicaoMenor + 1);

    return 0;
}
