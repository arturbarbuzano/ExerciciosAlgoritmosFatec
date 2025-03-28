#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 20

int vetA[MAX];
int vetB[MAX];
int vetC[MAX];
int vetD[MAX];

void Armazena_AB(int K)
{
    int i,j=0,k=0;
    for(i=0;i<K;i++)
    {
        printf("Digite um número no vetor A:");
        scanf("%d", &vetA[i]);
    }
    for(i=0;i<K;i++)
    {
        printf("Digite um número no vetor B:");
        scanf("%d", &vetB[i]);
    }
}
int Armazena_C(int K)
{
    int i,j=0;
    for(i=0;i<K;i++)
    {
        if(i%2!=0)
    {
        vetC[j]= vetA[i];
        j++;
        vetC[j] = vetB[i];
        j++;
    }
    }
    return j;

}

int Armazena_D(int K)
{
    int i, k=0;
    for(i=0;i<K;i++)
    {
        if(i%2==0)
        {
            vetD[k]= vetA[i];
            k++;
            vetD[k]= vetB[i];
            k++;
    }
    }
return k;
}

int Menor_Multiplo5(int K)
{
    int menormultiplo = -1, x;

    for(x = 0; x < K; x++)
    {
        if(vetD[x] % 5 == 0)
        {
            if (menormultiplo == -1 || vetD[x] < menormultiplo)
            {
                menormultiplo = vetD[x];
            }
        }
    }

    return menormultiplo;
}

int Media_Multiplos11(int j)
{
    int i;
    float soma=0,media, contador=0;

    for(i=0;i<j;i++)
    {
        if(vetC[i]%11==0)
        {
            soma+=vetC[i];
            contador++;
        }
    }

    media = soma/contador;

    if (contador > 0)
    {
        return media;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int K,i,j,k, menormultiplo;
    float media;
    setlocale(LC_ALL,"");

    do{
    printf("Digite a quantidade de elementos no vetor A e B:");
    scanf("%d", &K);
    if(K<5 || K>20)
    {
        printf("Digite uma quantidade entre 5 e 20\n");
    }
    }while(K<5 || K>20);

    Armazena_AB(K);
    j = Armazena_C(K);
    k = Armazena_D(K);

    printf("O valor do vetor A é:\n");

    for(i=0;i<K;i++)
    {
        printf("%d ", vetA[i]);
    }

    printf("\nO valor do vetor B é:\n");

    for(i=0;i<K;i++)
    {
        printf("%d ", vetB[i]);
    }

    printf("\nO valor do vetor C é:\n");

    for(i=0;i<j;i++)
    {
        printf("%d ", vetC[i]);
    }

    printf("\nO valor do vetor D é:\n");

    for(i=0;i<k;i++)
    {
        printf("%d ", vetD[i]);
    }

    menormultiplo = Menor_Multiplo5(K);

    if(menormultiplo ==-1)
    {
        printf("\nNão há múltiplos de 5 no vetor D.");
    }
    else
    {
        printf("\nO menor multiplo de 5 de D é:\n%d", menormultiplo);
    }

    media = Media_Multiplos11(j);

    if (media == -1)
    {
        printf("\nNão há múltiplos de 11 no vetor C.\n");
    }
    else
    {
        printf("\nA média dos múltiplos de 11 no vetor C é: %.2f\n",media);
    }
    return 0;
}
