#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int K, i, Num, cont=0;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a quantidade desejada:\n");
    scanf("%d", &K);

    for(i=0;i<K;i++)
    {
        printf("Digite um n�mero:\n");
        scanf("%d", &Num);

        if(Num%7==0)
        {
            cont++;
        }
    }
    printf("A quantidade de m�ltiplos de sete s�o:\n%d", cont);

    return 0;
}
