#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie a função Verifica que receba da função main um valor do tipo inteiro e declarado localmente na função main.
 Na função verifica e exiba se o valor é positivo ou negativo ou zero.
*/

int Verifica(int numero2)
{
    if(numero2>0)
    {
        printf("Número positivo");
    }
    else if(numero2<0)
    {
        printf("Número negativo");
    }
    else
    {
        printf("Número zero");
    }
}
int main()
{
    int numero;
    setlocale(LC_ALL,"");

    printf("Digite um número qualquer:");
    scanf("%d",&numero);

    Verifica(numero);

    return 0;
}
