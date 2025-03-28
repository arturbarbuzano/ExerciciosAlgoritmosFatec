/*Armazene num vetor dez números positivos. Exiba o conteúdo do vetor.
Mostre o maior número, quantas vezes ele foi digitado e em que posições ele apareceu dentro do vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int vet[10],i;
    int maior, contmaior=0, posmaior;

    printf("Digite dez números positivos:");

    for(i=0; i<10;i++)
    {
        do{
        scanf("%d", &vet[i]);
        if(vet[i]<0)
        {
            printf("Número negativo, digite novamente:");
        }
        }while(vet[i]<0);
    }

    printf("Exibindo números digitados...\n");

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

    printf("Número maior é: %d\n", maior);

    for(i=0; i<10;i++)
    {
        if(vet[i] ==maior)
        {
            contmaior +=1;
            posmaior = i;
            printf("Ele aparece na posição: %d\n", posmaior);
        }
    }

    printf("Esse número apareceu: %d vezes", contmaior);

    return 0;
}
