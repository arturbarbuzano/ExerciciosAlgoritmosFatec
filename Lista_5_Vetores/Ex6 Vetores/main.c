#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int vetorA[15],i, tamanho;
    int vetorB[15], fatorial=1;


    printf("Digite o tamanho do vetor de 1 até 15:");
    scanf("%d", &tamanho);

    for(i=0;i<tamanho;i++)
    {
    printf("Digite os elementos do vetor A:");
    scanf("%d", &vetorA[i]);
    }

    for(i=0;i<tamanho;i++)
    {
    for(int j=0;j<=vetorA[i];j++)
    {
        fatorial*=j;
    }
    vetorB[i] = fatorial;
    printf("%d", &vetorB);
    }
    return 0;
}
