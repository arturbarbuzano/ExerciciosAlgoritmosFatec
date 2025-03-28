
/*Leia oito elementos e armazene-os no vetor A.
Construa o vetor B de mesma dimensão com os elementos do vetor A multiplicados por 3.
Apresente o conteúdo dos dois vetores */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int vetorA[8],vetorB[8], i;
    setlocale(LC_ALL,"");

    for(i=0;i<8;i++)
    {
        printf("Digite um número qualquer:\n");
        scanf("%d",&vetorA[i]);
    }

    for(i=0;i<8;i++)
    {
        vetorB[i]=vetorA[i]*3;
    }

    printf("Valores do vetor A:\n");

    for(i=0;i<8;i++)
    {
        printf("%d\n", vetorA[i]);
    }

    printf("Valores do vetor B:\n");

    for(i=0;i<8;i++)
    {
        printf("%d\n", vetorB[i]);
    }

    return 0;
}

