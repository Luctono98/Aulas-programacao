#include <stdio.h>
#include <stdio.h>

int main ()
{
    //declara��o de variaveis
    float nota1;
    float nota2;
    float mediaAnual;



    //entrada
    printf("Digite a nota 1 : ");
    scanf("%f",&nota1);
    printf("Digite a nota 2 : ");
    scanf("%f",&nota2);

    //processamento
    mediaAnual = (nota1 + nota2) / 2;

    //criticar para saber se o aluno esta aprovado ou retido
    //saida
    if (mediaAnual >=7)
        //criticar para saber se o aluno dever� cursar DP
        //saida

    {
        printf( "APROVADO !!!");
    }
    else
    {

        printf( "ALUNO DEVER� CURSAR DP !!!");
    }
    return 0;
}
