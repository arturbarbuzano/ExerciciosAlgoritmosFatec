/*Armazene num vetor dez n�meros positivos. Exiba o conte�do do vetor.
Mostre o maior n�mero, quantas vezes ele foi digitado e em que posi��es ele apareceu dentro do vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int vet[10],i;
    int maior, contmaior=0, posmaior;

    printf("Digite dez n�meros positivos:");

    for(i=0; i<10;i++)
    {
        do{
        scanf("%d", &vet[i]);
        if(vet[i]<0)
        {
            printf("N�mero negativo, digite novamente:");
        }
        }while(vet[i]<0);
    }

    printf("Exibindo n�meros digitados...\n");

    for(i=0; i<10;i++)
    {
        printf("%d\n", vet[i]);
    }

    maior = vet[0];

    for(i=0; i<10;i++)
    {
        if(vet[i]>maior)
        {
            maior = vet[i];
        }
    }

    printf("N�mero maior �: %d\n", maior);

    for(i=0; i<10;i++)
    {
        if(vet[i] ==maior)
        {
            contmaior +=1;
            posmaior = i;
            printf("Ele aparece na posi��o: %d\n", posmaior);
        }
    }

    printf("Esse n�mero apareceu: %d vezes", contmaior);

    return 0;
}
