#include <stdlib.h>

int main()
{
int numero;
printf("Digite um número:\n ");
scanf("%d",&numero);
if (numero%2==0) {
    printf("O número digitado é par!");
}
else{
    printf("O número é ímpar");
}
return 0;
}

