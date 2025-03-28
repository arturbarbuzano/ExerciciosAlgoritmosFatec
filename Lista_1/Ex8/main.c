#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco;
    float precocomdesconto;
    float precocomreajuste;

    do
    {
        printf("Digite o preco:\n");
        scanf("%f", &preco);
    } while (preco<=0);

    if(preco>0)
    {
    precocomdesconto= preco*0.9;

    printf("Preco com desconto e': %f\n", precocomdesconto);

    precocomreajuste=preco*1.10;

    printf("Preco com reajuste e': %f\n", precocomreajuste);
    }

    return 0;
}
