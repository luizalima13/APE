#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
} Produto;

typedef struct Node {
    Produto produto;
    struct Node* proximo;
} Node;

Node* inicializarLista() {
    return NULL;
}

Node* adicionarProduto(Node* lista, int codigo, const char* descricao, int quantidade, float valor) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    novoNo->produto.codigo = codigo;
    strcpy(novoNo->produto.descricao, descricao);
    novoNo->produto.quantidade = quantidade;
    novoNo->produto.valor = valor;
    novoNo->proximo = lista;
    return novoNo;
}

void gerarRelatorio(Node* lista) {
    Node* atual = lista;
    printf("\nRelatorio de Produtos:\n");
    while (atual != NULL) {
        printf("Codigo: %d | Descricao: %s | Quantidade: %d | Valor: %.2f\n",
               atual->produto.codigo, atual->produto.descricao, atual->produto.quantidade, atual->produto.valor);
        atual = atual->proximo;
    }
}

void consultarProduto(Node* lista, int codigo) {
    Node* atual = lista;
    while (atual != NULL) {
        if (atual->produto.codigo == codigo) {
            printf("\nProduto Encontrado:\n");
            printf("Codigo: %d | Descricao: %s | Quantidade: %d | Valor: %.2f\n",
                   atual->produto.codigo, atual->produto.descricao, atual->produto.quantidade, atual->produto.valor);
            return;
        }
        atual = atual->proximo;
    }
    printf("\nProduto nao encontrado.\n");
}

Node* removerProduto(Node* lista, int codigo) {
    Node* atual = lista;
    Node* anterior = NULL;

    while (atual != NULL) {
        if (atual->produto.codigo == codigo) {
            if (anterior == NULL) {
                Node* temp = atual->proximo;
                free(atual);
                return temp;
            } else {
                anterior->proximo = atual->proximo;
                free(atual);
                return lista;
            }
        }
        anterior = atual;
        atual = atual->proximo;
    }

    printf("\nProduto nao encontrado.\n");
    return lista;
}

int main() {
    Node* listaEstoque = inicializarLista();
    int escolha;

    do {
        printf("\nSistema de Controle de Estoque\n");
        printf("1. Adicionar Produto\n");
        printf("2. Gerar Relatorio de Produtos\n");
        printf("3. Consultar Produto\n");
        printf("4. Remover Produto\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: {
                int codigo, quantidade;
                char descricao[50];
                float valor;

                printf("Digite o codigo do produto: ");
                scanf("%d", &codigo);

                printf("Digite a descricao do produto: ");
                scanf("%s", descricao);

                printf("Digite a quantidade do produto: ");
                scanf("%d", &quantidade);

                printf("Digite o valor do produto: ");
                scanf("%f", &valor);

                listaEstoque = adicionarProduto(listaEstoque, codigo, descricao, quantidade, valor);
                printf("\nProduto adicionado com sucesso!\n");
                break;
            }
            case 2:
                gerarRelatorio(listaEstoque);
                break;
            case 3: {
                int codigoConsulta;
                printf("Digite o codigo do produto a ser consultado: ");
                scanf("%d", &codigoConsulta);
                consultarProduto(listaEstoque, codigoConsulta);
                break;
            }
            case 4: {
                int codigoRemover;
                printf("Digite o codigo do produto a ser removido: ");
                scanf("%d", &codigoRemover);
                listaEstoque = removerProduto(listaEstoque, codigoRemover);
                break;
            }
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (escolha != 0);

    Node* atual = listaEstoque;
    Node* proximo;
    while (atual != NULL) {
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    return 0;
}
