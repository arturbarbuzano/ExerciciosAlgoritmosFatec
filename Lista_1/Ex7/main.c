#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    int sexo;
    float peso;

    do
    {
        printf("Digite o sexo\n");
        scanf("%d", &sexo);
    } while(sexo!=1 && sexo !=2);

    do
    {
        printf("Digite a altura\n");
        scanf("%f", &altura);
    } while (altura<=0);

    if(sexo==1)
    {
        peso = (72.7*altura)-58;
        printf("Peso e': %.2f kg", peso);
    }
    else if (sexo==2)
    {
        peso = (62.1*altura)-44.7;
    printf("Peso e': %.2f kg", peso);
    }

    return 0;
}
