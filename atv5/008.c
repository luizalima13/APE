#include <stdio.h>

int main()
{
    int idade, tempoServico;

    printf("Digite a idade:\n");
    scanf("%d",&idade);
    printf("Digite o tempo de servico:\n");
    scanf("%d",&tempoServico);

    if (idade >= 65 || tempoServico >= 30 || (idade>= 60 && tempoServico >= 25))
    {
        printf("Pode se aposentar");
    }else {
        printf("Nao pode se aposentar");
    }
    
    
    return 0;
}
