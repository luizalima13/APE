#include <stdio.h>

int main() {
    int vetorV[10];
    int v1[10], v2[10];
    int contadorV1 = 0, contadorV2 = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetorV[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetorV[i] % 2 == 0) {
            v2[contadorV2] = vetorV[i];
            contadorV2++;
        } else {
            v1[contadorV1] = vetorV[i];
            contadorV1++;
        }
    }

    printf("\nElementos UTILIZADOS de v1 (impares):\n");
    for (int i = 0; i < contadorV1; i++) {
        printf("%d ", v1[i]);
    }

    printf("\n\nElementos UTILIZADOS de v2 (pares):\n");
    for (int i = 0; i < contadorV2; i++) {
        printf("%d ", v2[i]);
    }

    printf("\n");

    return 0;
}
