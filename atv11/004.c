#include <stdio.h>
#include <math.h>

float calcularVolumeCilindro(float altura, float raio) {
    const float pi = 3.14159265358979323846;
    return pi * pow(raio, 2) * altura;
}

int main() {
    float altura, raio, volumeCilindro;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    volumeCilindro = calcularVolumeCilindro(altura, raio);

    printf("O volume do cilindro e: %.2f\n", volumeCilindro);

    return 0;
}
