#include <stdlib.h>
#include <stdio.h>

int main()
{
    int quantidade;
    float precoPao, valorPago;
    precoPao=0.30;
    printf ("Digite a quantidade de pães que deseja comprar: \n");
    scanf("%d",&quantidade);
    valorPago=quantidade*precoPao;
      
    printf ("O valor a ser pago é: R$%f",valorPago);


    return 0;
}