#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cont,idade,acumuladoIdade;
    float media;
    acumuladoIdade=0;
    for(cont=1;cont<=10;cont++)
    {
        printf("Digite a idade: \n");
        scanf("%d",&idade);
        acumuladoIdade+=idade;
        media=acumuladoIdade/cont;
    }
    printf("A média das idades é de: \n%f",media);


    return 0;
}