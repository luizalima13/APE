#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, digite um numero positivo.\n");
    } else {
        // Impressão dos divisores
        printf("Os divisores do numero %d sao: ", numero);

        for (int i = 1; i <= numero / 2; i++) {
            if (numero % i == 0) {
                printf("%d, ", i);
            }
        }

        printf("%d\n", numero);
    }

    return 0;
}
