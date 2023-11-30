#include <stdio.h>

int main() {
    float A, B, C;
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    float temp1 = A, temp2 = B, temp3 = C;

    if (temp1 > temp2) {
        float temp = temp1;
        temp1 = temp2;
        temp2 = temp;
    }

    if (temp2 > temp3) {
        float temp = temp2;
        temp2 = temp3;
        temp3 = temp;
    }

    if (temp1 > temp2) {
        float temp = temp1;
        temp1 = temp2;
        temp2 = temp;
    }

    printf("Valores em ordem ascendente: %.2f, %.2f, %.2f\n", temp1, temp2, temp3);

    return 0;
}
