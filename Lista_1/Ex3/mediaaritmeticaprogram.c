#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nota1;
    int Nota2;
    int Media;

    printf("Digite um numero: ");
    scanf("%i", &Nota1);

    printf("\nDigite um numero: ");
    scanf("%i", &Nota2);

    Media= (Nota1 + Nota2) /2;

    printf("\nSua media e': %i\n", Media);

    if (Media>=6)
       printf("\nAprovado \n");
    else
       printf("\nReprovado \n");

}
