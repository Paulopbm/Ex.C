#include <stdio.h>

int opcoes(){

    int opcao;

    printf("MODO DE PAGAMENTO:\n");

    printf("1 - A VISTA\n");
    printf("2 - 2 VEZES\n");
    printf("3 - 3 VEZES\n");

    scanf("%d",&opcao);

    printf("\n\n");

    return(opcao);
}

float aVista(float valor){
    printf("TOTAL : %.2f R$\n",valor);
    printf("TOTAL A PAGAR : %.2f R$.\n",valor * 0.9);

    return(0);

}

float duasVezes(float valor){

    printf("TOTAL : %.2f R$\n",valor);
    printf("2 PARCELAS DE %.2f R$ CADA\n",valor/2);
    return(0);

}

float tresVezes(float valor){

    int parcelas;

    printf("TOTAL : %.2f R$\n",valor);

    do{
        printf("Quantidade de parcelas.\n");
        scanf("%d",&parcelas);

    }while( (parcelas > 10) || (parcelas < 3) );

    printf("%d PARCELAS DE %.2f R$ CADA.\n",parcelas,(valor * 1.03)/parcelas);

    return(0);

}


int main(){

    float valorCompra;
    int OPCAO;

    printf("Entre com o TOTAL DA COMPRA: \n");
    scanf("%f",&valorCompra);

    printf("\n\n");

    switch(opcoes()){
        case 1:
            printf("PAGAMENGO A VISTA.\n");
            aVista(valorCompra);
            break;
        case 2:
            printf("PAGAMENTO EM 2X.\n");
            duasVezes(valorCompra);
            break;
        case 3:
            printf("PAGAMENTO EM 3X OU MAIS.\n");
            tresVezes(valorCompra);
            break;
        default:
            printf("COMPRA CANCELADA\n");
    }



    return(0);
}
