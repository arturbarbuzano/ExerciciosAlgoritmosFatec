#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie a fun��o Verifica que receba da fun��o main um valor do tipo inteiro e declarado localmente na fun��o main.
 Na fun��o verifica e exiba se o valor � positivo ou negativo ou zero.
*/

int Verifica(int numero2)
{
    if(numero2>0)
    {
        printf("N�mero positivo");
    }
    else if(numero2<0)
    {
        printf("N�mero negativo");
    }
    else
    {
        printf("N�mero zero");
    }
}
int main()
{
    int numero;
    setlocale(LC_ALL,"");

    printf("Digite um n�mero qualquer:");
    scanf("%d",&numero);

    Verifica(numero);

    return 0;
}
