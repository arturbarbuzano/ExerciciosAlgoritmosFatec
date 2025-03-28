#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1, n2, n3;

    setlocale(LC_ALL,"Portuguese");

    do{
    printf("Digite o primeiro número do lado do triângulo:\n");
    scanf("%d", &n1);

    printf("Digite o segundo número do lado do triângulo:\n");
    scanf("%d", &n2);

    printf("Digite o terceiro número do lado do triângulo:\n");
    scanf("%d", &n3);

    if(n1>n2+n3 || n2>n1+n3 || n3>n1+n2)
    {
        printf("Lado maior que a soma dos outros dois, por favor digite novamente.\n");
    }
    }while(n1>n2+n3 || n2>n1+n3 || n3>n1+n2);
    if(n1==n2 &&n1==n3)
    {
        printf("O triângulo é equilátero, pois todos os lados são iguais.");
    }

    else if(n1==n2 &&n1!=n3 || n1==n3 &&n1!=n2 || n2==n3 &&n2!=n1 || n2==n1 && n2!=n3)
    {
        printf("O triângulo é isósceles, pois pelo menos dois lados são iguais.");
    }

    else if(n1!=n2 &&n1!=n3 && n2!=n3)
    {
        printf("O triângulo é escaleno, pois todos os lados são diferentes.");
    }

    return 0;
}
