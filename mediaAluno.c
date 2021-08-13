#include <stdlib.h>
#include <stdio.h>

int main()
{
    float nota1,nota2,mediaFinal;
    printf("Digite a PRIMEIRA nota: \n");
    scanf("%f",&nota1);
    printf("Digite a SEGUNDA nota: \n");
    scanf("%f",&nota2);
    mediaFinal=(nota1+nota2)/2;
    if (mediaFinal>=7){
        printf("Parabéns, você foi aprovado!");
    }
    else{
        printf("Infelizmente você não conseguiu a aprovação!");
    }

    return 0;
}