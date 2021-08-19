#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num=1,sum=0;
       
    while (num!=0)
    {
       printf("\nDigite um número: \n");
       scanf("%d",&num);
       sum+=num;

    }
    printf("O valor da soma é: \n%d", sum);
    

    return 0;
}