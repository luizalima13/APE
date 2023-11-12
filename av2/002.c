#include <stdio.h>


char validaSexo() {
    char sexo;
    do {
        printf("Digite o sexo (M para masculino, F para feminino): ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo); 
        if (sexo != 'M' && sexo != 'F') {
            printf("Sexo invalido. Tente novamente.\n");
        }
    } while (sexo != 'M' && sexo != 'F');
    return sexo;
}

float validaSalario() {
    float salario;
    do {
        printf("\nDigite o salario: ");
        scanf("%f", &salario);
        if (salario <= 1.00) {
            printf("\nSalario invalido. Tente novamente.\n");
        }
    } while (salario <= 1.00);
    return salario;
}

char* classificaSalario(float salario, float salarioMinimo) {
    if (salario > salarioMinimo) {
        return "Acima do salario minimo";
    } else if (salario == salarioMinimo) {
        return "Igual ao salario minimo";
    } else {
        return "Abaixo do salario minimo";
    }
}

void mostraClassificacao(char sexo, float salario, float salarioMinimo) {
    printf("Resultado:");
    printf("\nSexo: %s", (sexo == 'M') ? "Masculino" : "Feminino");
    printf("\nSalario: R$ %.2f", salario);
    printf("\nClassificacao em relacao ao salario minimo: %s", classificaSalario(salario, salarioMinimo));
}

int main() {
    const float salarioMinimo = 1400.00;
    int quantidadeAbaixo = 0, quantidadeAcima = 0;

    do {
        char sexo = validaSexo();
        float salario = validaSalario();

        mostraClassificacao(sexo, salario, salarioMinimo);

        if (salario > salarioMinimo) {
            quantidadeAcima++;
        } else {
            quantidadeAbaixo++;
        }

        printf("\nDeseja cadastrar outro assalariado? (S para Sim, N para Nao): ");
        char resposta;
        scanf(" %c", &resposta);

        if (resposta != 'S' && resposta != 's') {
            break;
        }

    } while (1);

    printf("\nTotal de assalariados abaixo do salario minimo: %d", quantidadeAbaixo);
    printf("\nTotal de assalariados acima do salario minimo: %d", quantidadeAcima);

    return 0;
}
