#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num[5]={1,2,3,4,5};
    int cont,acumulador=0;
    for (cont=0;cont<5;cont++)
    {
        acumulador+=num[cont];
    }
    printf("O somatório é: %d \n",acumulador);


    return 0;
}