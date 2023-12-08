#include <stdio.h>

float converterFahrenheitParaCelsius(float temperaturaFahrenheit) {
    return (temperaturaFahrenheit - 32.0) * (5.0 / 9.0);
}

int main() {
    float temperaturaFahrenheit, temperaturaCelsius;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    temperaturaCelsius = converterFahrenheitParaCelsius(temperaturaFahrenheit);

    printf("%.2f graus fahrenheit e igual a %.2f graus Celsius.\n", temperaturaFahrenheit, temperaturaCelsius);

    return 0;
}
