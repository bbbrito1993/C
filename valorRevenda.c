#include <stdlib.h>
#include <stdio.h>

int main()
{
    float valorProduto, valorRevenda;
    printf("Qual o valor em R$ do produto?");
    scanf("%f",&valorProduto);
    if (valorProduto<20)
    {
        printf("O valor de revenda é de: R$%f",valorProduto*1.4);
    }
    else{
        printf("O valor de revenda é de: R$%f",valorProduto*1.3);
    }

    return 0;
}