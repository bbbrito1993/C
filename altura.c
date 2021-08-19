#include <stdlib.h>
#include <stdio.h>

int main()
{
    float altura;
    do
    {
        printf("\nSeja Bem vindo ao nosso Parque de Diversões.");
        printf("\nQual a sua altura? \n");
        scanf("%f",&altura);
        if (altura>=1.8)
        {
            printf("Bem vindo ao brinquedo! Se divirta com segurança!");
        }
        else
        {
            printf("Entrada não Permitida.\nInfelizmente você não poderá aproveitar esse brinquedo.\nMas não se preocupe, existem vários brinquedos esperando por você.");
        }
    } while (altura!=0);
    
    
    

    return 0;
}