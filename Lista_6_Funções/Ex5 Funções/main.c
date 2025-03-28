#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie a função ParImpar que receba da função main um valor do tipo inteiro e maior que zero que verifique
 se o número é para ou ímpar. Exiba no interior da função Parimpar.
 */

int ParImpar(int numero2)
{
    if(numero2%2==0)
    {
        printf("O número é Par.");
    }
    else
    {
        printf("O número é Ímpar.");
    }
}

int main()
{
    int numero;

    setlocale(LC_ALL,"");

    do{
    printf("Digite um número qualquer:");
    scanf("%d", &numero);
    if(numero<0)
    {
        printf("O número é menor que zero, por favor digite novamente.\n");
    }
    }while(numero<0);

    ParImpar(numero);
    return 0;
}
