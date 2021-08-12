#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numero1,numero2,numero3;
    printf("Digite 3 numeros\n");
    scanf("%d",&numero1);
    scanf("%d",&numero2);
    scanf("%d",&numero3);
    if(numero1==numero2&&numero2==numero3) {
        printf("Números iguais, favor tentar novamente!");
    }
    else{
    if(numero1>numero2&&numero1>numero3){
        printf("O maior número é o primeiro: %d",numero1);
    }
    else{
    if(numero2>numero3){
        printf("O maior número é o segundo: %d",numero2);
    }
    else{
        printf("O maior número é o terceiro: %d",numero3);
    }

    }    

    }    
    return 0;
}