#include <stdio.h>

int main()
{
    float preco;
    float preco10;
    float preco20;

    printf("Digite o preco:");
    scanf("%f", &preco);

    if(preco<100)
    {
        preco10 = preco*1.10;
        printf("%f", preco10);
    }
    else
    {
        preco20 = preco*1.20;
        printf("%f", preco20);
    }

    return 0;
}
