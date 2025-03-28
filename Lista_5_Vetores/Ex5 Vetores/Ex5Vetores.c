#include <stdio.h>
#include <locale.h>

int main ()
{
    int vetorA[10],i;
    int vetorB[10];
    setlocale(LC_ALL,"");

    for(i=0;i<10;i++)
    {
        printf("Digite um número qualquer:");
        scanf("%d",&vetorA[i]);
    }


    for(i=0;i<10;i++)
    {
      vetorB[i] = -vetorA[i];
    }

    for(i=0;i<10;i++)
    {
        printf("%d %d\n", vetorB[i], vetorA[i]);
    }
    return 0;
    }

