#include <stdio.h>
#include <stdio.h>

int main ()
{
    //declaração de variaveis
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
        //criticar para saber se o aluno deverá cursar DP
        //saida

    {
        printf( "APROVADO !!!");
    }
    else
    {

        printf( "ALUNO DEVERÁ CURSAR DP !!!");
    }
    return 0;
}
