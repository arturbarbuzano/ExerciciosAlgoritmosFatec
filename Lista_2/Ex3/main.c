#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1, n2, n3;
    setlocale(LC_ALL,"Portuguese");

    do{
    printf("Digite o primeiro n�mero:\n");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero:\n");
    scanf("%d", &n2);

    printf("Digite o terceiro n�mero:\n");
    scanf("%d", &n3);
    if(n1==n2 && n1==n3)
    {
        printf("N�meros iguais, por favor insira os dados novamente.\n");
    }
    }while(n1==n2 && n1==n3);

    if(n1>n2 && n1>n3)
    {
        printf("O n�mero %d � o maior de todos", n1);
    }

    else if(n2>n1 && n2>n3)
    {
        printf("O n�mero %d � o maior de todos", n2);
    }

    else if(n3>n1 && n3>n2)
    {
        printf("O n�mero %d � o maior de todos", n3);
    }
    return 0;
}
