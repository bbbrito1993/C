#include <stdio.h>
#include <stdlib.h>

int main()
{
char sexo;
printf("Digite o sexo sendo M ou F, caso não queira informar, basta digitar N \n");
scanf("%c",&sexo);
switch(sexo)
{
case 'M':
    printf("Masculino");
    break;
    case 'F':
    printf("Feminino");
    break;
    case 'N':
    printf("Não há problema em não querer informar! A diversidade é bem vinda com a gente também!");
    break;
default:
    printf("Valor não corresponde aos solicitados!");
    break;
}


return 0;
    
}
