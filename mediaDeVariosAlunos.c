#include <stdlib.h>
#include <stdio.h>

int main()
{
    float media,nota,acumulado;
    int cont;
    cont=0;
    acumulado=0;
    while (cont<4)
    {
        if(nota>=0&&nota<=10)
        {
        printf("Digite a nota do aluno: ");
        scanf("%f",&nota);
        acumulado=acumulado+nota;
        cont++;
        }
        else
        {
            printf("Valor digitado não é um valor válido");
            break;
        }
    }
    media=acumulado/cont;
    printf("Média do aluno é: %f",media);



    return 0;
}