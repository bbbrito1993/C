#include <stdlib.h>
#include <stdio.h>

int main()
{
    float nota[10];
    int cont;
    for (cont=0;cont<10;cont++)
    {
        printf("\nDigite a nota: \n");
        scanf("%f",&nota[cont]);
        printf("A nota na posicão %d é: %f",cont,&nota[cont]);
    }
    
      

    return 0;
}