#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1, n2, n3;

    setlocale(LC_ALL,"Portuguese");

    do{
    printf("Digite o primeiro n�mero do lado do tri�ngulo:\n");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero do lado do tri�ngulo:\n");
    scanf("%d", &n2);

    printf("Digite o terceiro n�mero do lado do tri�ngulo:\n");
    scanf("%d", &n3);

    if(n1>n2+n3 || n2>n1+n3 || n3>n1+n2)
    {
        printf("Lado maior que a soma dos outros dois, por favor digite novamente.\n");
    }
    }while(n1>n2+n3 || n2>n1+n3 || n3>n1+n2);
    if(n1==n2 &&n1==n3)
    {
        printf("O tri�ngulo � equil�tero, pois todos os lados s�o iguais.");
    }

    else if(n1==n2 &&n1!=n3 || n1==n3 &&n1!=n2 || n2==n3 &&n2!=n1 || n2==n1 && n2!=n3)
    {
        printf("O tri�ngulo � is�sceles, pois pelo menos dois lados s�o iguais.");
    }

    else if(n1!=n2 &&n1!=n3 && n2!=n3)
    {
        printf("O tri�ngulo � escaleno, pois todos os lados s�o diferentes.");
    }

    return 0;
}
