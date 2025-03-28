#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define b)

#ifdef a)
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int K, i, numero;

    do{
    printf("Digite a quantidade desejada de termos:\n");
    scanf("%d", &K);

    if(K<=0)
    {
        printf("Quantidade deve ser maior que 0, por favor digite novamente.\n");
    }
    }while(K<=0);

    for(i=1;i<=K;i++)
    {
        numero = 3*i;
        printf("%d", numero);
    }

    return 0;
}

#endif

#ifdef b)

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float K, i;

    do{
    printf("Digite a quantidade desejada de termos:\n");
    scanf("%f", &K);

    if(K<=0)
    {
        printf("Quantidade deve ser maior que 0, por favor digite novamente.\n");
    }
    }while(K<=0);

    for(i=1;i<=K;i++)
    {
        printf("%f\n",1/(4*i));
    }

    return 0;
}

#endif
