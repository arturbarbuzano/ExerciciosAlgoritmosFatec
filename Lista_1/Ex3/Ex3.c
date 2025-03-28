#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nota1;
    int Nota2;
    int Nota3;
    int Nota4;
    int Media;

    printf("Digite um numero: " );

    scanf("%i", &Nota1);

    printf("%i \n", Nota1);

    printf("\nDigite um numero: ");

    scanf("%i", &Nota2);

    printf("%i\n", Nota2);

    printf("\nDigite um numero: ");

    scanf("%i", &Nota3);

    printf("%i\n", Nota3);

    printf("\nDigite um numero: ");

    scanf("%i", &Nota4);

    printf("%i\n", Nota4);

    Media= (Nota1 + Nota2 + Nota3 + Nota4) /4;

    printf("\nSua media e': %i\n", Media);

    if (Media>=6)
       printf("\nAprovado \n");
    else
       printf("\nReprovado \n");

}
