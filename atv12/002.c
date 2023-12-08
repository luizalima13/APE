#include <stdio.h>

#define TAMANHO_VETOR 500

void calcularLocacoesGratuitas(int vetorA[], int vetorLocacoes[]) {
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetorLocacoes[i] = vetorA[i] / 15;
    }
}

int main() {
    int vetorFilmesRetirados[TAMANHO_VETOR];
    int vetorLocacoesGratuitas[TAMANHO_VETOR];

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetorFilmesRetirados[i] = 30; 
    }

    calcularLocacoesGratuitas(vetorFilmesRetirados, vetorLocacoesGratuitas);

    printf("Quantidade de locacoes gratuitas por cliente:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Cliente %d: %d locacoes gratuitas\n", i + 1, vetorLocacoesGratuitas[i]);
    }

    return 0;
}
