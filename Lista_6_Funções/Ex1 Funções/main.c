#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Esfera(float raio)
{
    float volume2;
    volume2 = (4*3.14*(raio*raio*raio))/3;
    return(volume2);
}

int main()
{
    float volume;
    float raio;

    setlocale(LC_ALL, "");
    printf("Digite um n�mero qualuqer para o raio:");
    scanf("%f", &raio);
    volume = Esfera(raio);
    printf("O valor do seu volume �: %f",volume);
    return 0;
}
