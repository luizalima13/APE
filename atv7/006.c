#include<stdio.h>
#include<string.h>

int main(){

    int quantidade, opcaoFruta, opcao;
    float  valorTotalCompra = 0, precoFruta, valorTotalFruta;
    char nomeFruta[20];

    do{

            fflush(stdin);
            printf("\nEscolha a fruta: 1 => ABACAXI - 5,00 a unidade 2 => MACA - 1,00 a unidade 3 => PERA - 4,00 a unidade");
            printf("\nDigite o codigo da fruta e a quatidade: ");

            scanf("%d", &opcaoFruta);
            scanf("%d", &quantidade);
            
            fflush(stdin);

            switch (opcaoFruta){
            case 1:
                    precoFruta = 5.00;
                    strcpy(nomeFruta, "Abacaxi");
                    valorTotalFruta = quantidade * precoFruta;
                    valorTotalCompra += valorTotalFruta;
                break;
            case 2:
                    precoFruta = 1.00;
                    strcpy(nomeFruta, "Maca");
                    valorTotalFruta = quantidade * precoFruta;
                    valorTotalCompra += valorTotalFruta;
                break;
            case 3:
                    precoFruta = 4.00;
                    strcpy(nomeFruta, "Pera");
                    valorTotalFruta = quantidade * precoFruta;
                    valorTotalCompra += valorTotalFruta;
                break;
                }

            printf("\nFruta adicionada e valor total da fruta:");
            printf("\n %s %.2f", nomeFruta, valorTotalFruta);

            printf("\nDeseja adicionar mais alguma fruta? 1 SIM | 0 NAO");
            scanf("%d", &opcao);
    }while(opcao != 0);

    printf("\nValor total da compra %.2f", valorTotalCompra);
    
    return 0;
}
