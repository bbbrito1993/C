#include <stdlib.h>
#include <stdio.h>

int main()
{
    float person1,person2,person3;
    printf("Olá, nossos scanners identificaram que vocês são 3. \n Por favor digite a altura da primeira pessoa: \n");
    scanf("%f",&person1);
    if (person1>=1.80)
    {
        printf("Pode prosseguir para o brinquedo!");
    }
    else
    {
        printf("Infelizmente você não poderá aproveitar esse brinquedo.\nMas não se preocupe, existem vários brinquedos esperando por você.");
    }
    printf("\nDigite a altura da segunda pessoa: \n");
    scanf("%f",&person2);
    if (person2>=1.80)
    {
        printf("Pode prosseguir para o brinquedo!");
    }
    else
    {
        printf("Infelizmente você não poderá aproveitar esse brinquedo.\nMas não se preocupe, existem vários brinquedos esperando por você.");
    }
    printf("\nDigite a altura da terceira pessoa: \n");
    scanf("%f",&person3);
    if (person3>=1.80)
    {
        printf("Pode prosseguir para o brinquedo!");
    }
    else
    {
        printf("Infelizmente você não poderá aproveitar esse brinquedo.\nMas não se preocupe, existem vários brinquedos espérando por você.");
    }
    printf("\nAtendimento Finalizado! Obrigado!");
    


    return 0;
}