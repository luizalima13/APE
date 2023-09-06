#include<stdio.h>

int main()
{
    int prato, sobremesa, bebida, calorias;

    printf( "Escolha um prato: 1 - Vegetariano (180 cal), 2- Peixe (230 cal), 3- Frango (250 cal), 4- Carne (350 cal)\n");
    scanf("%d", &prato);   

    switch (prato)
    {
    case 1:
        calorias = 180;
        break;
    case 2:
        calorias = 230;
        break;
    case 3:
        calorias = 350;
        break;
    }
    printf( "Escolha uma sobremesa: 1 - Abacaxi (75 cal), 2- Sorvete Diet (110 cal), 3- Mouse Diet (170 cal), 4- Mouse de Chocolate (200 cal)\n");
    scanf("%d", &sobremesa);  
    switch (sobremesa)
    {
    case 1:
        calorias = calorias + 75;
        break;
    case 2:
        calorias = calorias + 110;
        break;
    case 3:
        calorias = calorias + 170;
        break;
    case 4:
        calorias = calorias + 200;
        break;
    }
    printf( "Escolha uma sobremesa: 1 - Cha (20 cal), 2- Suco laranja (75 cal), 3- Suco melao (100 cal), 4- Refrigerante diet (65 cal)\n");
    scanf("%d", &bebida);  
    switch (bebida)
    {
    case 1:
        calorias = calorias + 20;
        break;
    case 2:
        calorias = calorias + 75;
        break;
    case 3:
        calorias = calorias + 100;
        break;
    case 4:
        calorias = calorias + 65;
        break;
    }
    printf("Total de calorias sera: %d", calorias);
    
    return 0;
}
