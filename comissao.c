#include <stdlib.h>
#include <stdio.h>

int main()
{
    int quantCarros;
    float comissao, valorRecebido,salario;
    printf("Qual a quantidade de carros vendida no mês? \n");
    scanf("%d",&quantCarros);
    printf("Qual o percentual da sua comissão? \n");
    scanf("%f",&comissao);
    comissao=(comissao/100)+1;
    salario=3000;
    valorRecebido=salario*comissao;
    printf("O valor a receber entre salário e comissão é: R$%f",valorRecebido);

    return 0;
}