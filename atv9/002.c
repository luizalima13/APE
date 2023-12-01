#include <stdio.h>

int main() {
    int valores[6];

    printf("Digite 6 valores inteiros:\n");

    for (int i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("\nValores lidos:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
