#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int alturadegrau, altura;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a altura do degrau:\n");
    scanf("%d", &alturadegrau);

    printf("Digite a altura total:\n");
    scanf("%d", &altura);

    printf("A quantidade de degraus que será preciso subir são:\n%d", altura/alturadegrau);

    return 0;
}
