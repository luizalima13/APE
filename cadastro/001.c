#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USERS 1000

typedef struct {
    int id;
    char nome[50];
    char email[50];
    char sexo[20];
    char endereco[100];
    double altura;
    int vacina;
} Usuario;

typedef struct {
    Usuario usuarios[MAX_USERS];
    int totalUsuarios;
} GerenciadorUsuarios;

void inicializarGerenciador(GerenciadorUsuarios* gerenciador) {
    gerenciador->totalUsuarios = 0;
}

int gerarIdUnico() {
    srand((unsigned int)time(NULL));
    return rand();
}

void incluirUsuario(GerenciadorUsuarios* gerenciador) {
    if (gerenciador->totalUsuarios < MAX_USERS) {
        Usuario novoUsuario;
        novoUsuario.id = gerarIdUnico();

        printf("Digite o nome completo: ");
        scanf(" %[^\n]", novoUsuario.nome);

        printf("Digite o email: ");
        scanf(" %[^\n]", novoUsuario.email);

        do {
            printf("Digite o sexo (Feminino, Masculino ou Indiferente): ");
            scanf(" %[^\n]", novoUsuario.sexo);
        } while (strcmp(novoUsuario.sexo, "Feminino") != 0 &&
                 strcmp(novoUsuario.sexo, "Masculino") != 0 &&
                 strcmp(novoUsuario.sexo, "Indiferente") != 0);

        printf("Digite o endereço: ");
        scanf(" %[^\n]", novoUsuario.endereco);

        do {
            printf("Digite a altura (entre 1 e 2 metros): ");
            scanf("%lf", &novoUsuario.altura);
        } while (novoUsuario.altura < 1 || novoUsuario.altura > 2);

        do {
            printf("Usuario foi vacinado? (1 para sim, 0 para nao): ");
            scanf("%d", &novoUsuario.vacina);
        } while (novoUsuario.vacina != 0 && novoUsuario.vacina != 1);

        gerenciador->usuarios[gerenciador->totalUsuarios] = novoUsuario;
        gerenciador->totalUsuarios++;

        printf("Usuario cadastrado com sucesso!\n");
    } else {
        printf("Limite maximo de usuarios atingido!\n");
    }
}

void editarUsuario(GerenciadorUsuarios* gerenciador) {
    int idEditar;
    printf("Digite o ID do usuario a ser editado: ");
    scanf("%d", &idEditar);

    for (int i = 0; i < gerenciador->totalUsuarios; i++) {
        if (gerenciador->usuarios[i].id == idEditar) {
            printf("Digite o novo nome completo: ");
            scanf(" %[^\n]", gerenciador->usuarios[i].nome);

            printf("Digite o novo email: ");
            scanf(" %[^\n]", gerenciador->usuarios[i].email);

            do {
                printf("Digite o novo sexo (Feminino, Masculino ou Indiferente): ");
                scanf(" %[^\n]", gerenciador->usuarios[i].sexo);
            } while (strcmp(gerenciador->usuarios[i].sexo, "Feminino") != 0 &&
                     strcmp(gerenciador->usuarios[i].sexo, "Masculino") != 0 &&
                     strcmp(gerenciador->usuarios[i].sexo, "Indiferente") != 0);

            printf("Digite o novo endereco: ");
            scanf(" %[^\n]", gerenciador->usuarios[i].endereco);

            do {
                printf("Digite a nova altura (entre 1 e 2 metros): ");
                scanf("%lf", &gerenciador->usuarios[i].altura);
            } while (gerenciador->usuarios[i].altura < 1 || gerenciador->usuarios[i].altura > 2);

            do {
                printf("Usuario foi vacinado? (1 para sim, 0 para nao): ");
                scanf("%d", &gerenciador->usuarios[i].vacina);
            } while (gerenciador->usuarios[i].vacina != 0 && gerenciador->usuarios[i].vacina != 1);

            printf("Usuario editado com sucesso!\n");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void excluirUsuario(GerenciadorUsuarios* gerenciador) {
    int idExcluir;
    printf("Digite o ID do usuario a ser excluido: ");
    scanf("%d", &idExcluir);

    for (int i = 0; i < gerenciador->totalUsuarios; i++) {
        if (gerenciador->usuarios[i].id == idExcluir) {
            for (int j = i; j < gerenciador->totalUsuarios - 1; j++) {
                gerenciador->usuarios[j] = gerenciador->usuarios[j + 1];
            }
            gerenciador->totalUsuarios--;

            printf("Usuario excluido com sucesso!\n");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void buscarPorEmail(GerenciadorUsuarios* gerenciador) {
    char emailBusca[50];
    printf("Digite o email do usuario a ser buscado: ");
    scanf(" %[^\n]", emailBusca);

    for (int i = 0; i < gerenciador->totalUsuarios; i++) {
        if (strcmp(gerenciador->usuarios[i].email, emailBusca) == 0) {
            printf("\n***** USUARIO ENCONTRADO *****\n");
            printf("ID: %d\n", gerenciador->usuarios[i].id);
            printf("Nome: %s\n", gerenciador->usuarios[i].nome);
            printf("Email: %s\n", gerenciador->usuarios[i].email);
            printf("Sexo: %s\n", gerenciador->usuarios[i].sexo);
            printf("Endereco: %s\n", gerenciador->usuarios[i].endereco);
            printf("Altura: %.2f\n", gerenciador->usuarios[i].altura);
            printf("Vacina: %s\n", gerenciador->usuarios[i].vacina ? "Sim" : "Nao");
            printf("*******************************\n");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void imprimirTodosUsuarios(GerenciadorUsuarios* gerenciador) {
    printf("\n***** TODOS OS USUARIOS CADASTRADOS *****\n");
    for (int i = 0; i < gerenciador->totalUsuarios; i++) {
        printf("ID: %d\n", gerenciador->usuarios[i].id);
        printf("Nome: %s\n", gerenciador->usuarios[i].nome);
        printf("Email: %s\n", gerenciador->usuarios[i].email);
        printf("Sexo: %s\n", gerenciador->usuarios[i].sexo);
        printf("Endereco: %s\n", gerenciador->usuarios[i].endereco);
        printf("Altura: %.2f\n", gerenciador->usuarios[i].altura);
        printf("Vacina: %s\n", gerenciador->usuarios[i].vacina ? "Sim" : "Nao");
        printf("*******************************\n");
    }
}

int main() {
    GerenciadorUsuarios gerenciador;
    inicializarGerenciador(&gerenciador);

    char opcao;
    do {
        printf("\n***** SISTEMA DE CONTROLE DE USUARIOS *****\n");
        printf("1. Incluir usuario\n");
        printf("2. Editar usuario\n");
        printf("3. Excluir usuario\n");
        printf("4. Buscar usuario por email\n");
        printf("5. Imprimir todos os usuarios\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                incluirUsuario(&gerenciador);
                break;
            case '2':
                editarUsuario(&gerenciador);
                break;
            case '3':
                excluirUsuario(&gerenciador);
                break;
            case '4':
                buscarPorEmail(&gerenciador);
                break;
            case '5':
                imprimirTodosUsuarios(&gerenciador);
                break;
            case '6':
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != '6');

    return 0;
}
