#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int K, i, Num,cont=0,cont2=0;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a quantidade desejada:\n");
    scanf("%d", &K);

    for(i=0;i<K;i++)
    {
        printf("Digite o n�mero:\n");
        scanf("%d", &Num);


        if(Num==0)
        {
            cont++;
        }

        else if(Num%2==0)
        {
            cont2++;
        }
    }
    printf("A quantidade de n�meros pares digitados:\n%d\n",cont2);
    printf("A quantidade de n�meros zeros digitados:\n%d", cont);
    return 0;
}
