#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie a fun��o ParImpar que receba da fun��o main um valor do tipo inteiro e maior que zero que verifique
 se o n�mero � para ou �mpar. Exiba no interior da fun��o Parimpar.
 */

int ParImpar(int numero2)
{
    if(numero2%2==0)
    {
        printf("O n�mero � Par.");
    }
    else
    {
        printf("O n�mero � �mpar.");
    }
}

int main()
{
    int numero;

    setlocale(LC_ALL,"");

    do{
    printf("Digite um n�mero qualquer:");
    scanf("%d", &numero);
    if(numero<0)
    {
        printf("O n�mero � menor que zero, por favor digite novamente.\n");
    }
    }while(numero<0);

    ParImpar(numero);
    return 0;
}
