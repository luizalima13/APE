#include <stdio.h>
#include <math.h>

float calcularVolumeEsfera(float raio) {
    const float pi = 3.14159265358979323846;
    return (4.0 / 3.0) * pi * pow(raio, 3);
}

int main() {
    float raio, volumeEsfera;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volumeEsfera = calcularVolumeEsfera(raio);

    printf("O volume da esfera e: %.2f\n", volumeEsfera);

    return 0;
}
