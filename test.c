#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char nome[50];
    int idade;
    char matricula[20];
    char endereco[100];
    char curso[50];
    char periodo[20];
    
    printf("Cadastro de Aluno\n");
    
    printf("Nome: ");
    scanf(" %[^\n]", nome);
    fflush(stdin);  
    
    printf("Idade: ");
    scanf("%d", &idade);
    fflush(stdin);  
    
    printf("Matrícula: ");
    scanf(" %[^\n]", matricula);
    fflush(stdin);  
    
    printf("Endereço: ");
    scanf(" %[^\n]", endereco);
    fflush(stdin);  
    
    printf("Curso: ");
    scanf(" %[^\n]", curso);
    fflush(stdin); 
    
    printf("Período: ");
    scanf(" %[^\n]", periodo);
    fflush(stdin);
    
    printf("\nInformações do Aluno:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Matrícula: %s\n", matricula);
    printf("Endereço: %s\n", endereco);
    printf("Curso: %s\n", curso);
    printf("Período: %s\n", periodo);
    
    return 0;
}