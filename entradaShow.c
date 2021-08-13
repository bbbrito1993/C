#include <stdlib.h>
#include <stdio.h>

int main()
{
    int age;
    printf("Será uma honra te receber no nosso show. Porém, antes, gostaríamos de saber. Qual a sua idade? \n");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("você será muito bem vindo no nosso show. Lembrando que será cobrado um documento com foto na entrada. Bom show!");
    }
    else
    {
        printf("Infelizmente não será possível efetuar a compra, pois o evento só é permitido para maiores de idade.");
    }

    return 0;
}