#include <stdio.h>

float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    float peso, altura, imc;

    printf("Digite o peso (em quilos): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    imc = calcularIMC(peso, altura);

    printf("O IMC e: %.2f\n", imc);

    return 0;
}
