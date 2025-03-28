#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int MediaFibonacci(int sequencia)
{
    int atual,i, media2;
    int ant1=1, ant2=0;
    int soma=0;
//0 1 1 2 3 5 8 13 21 34
    for(i=3;i<=sequencia;i++)
    {
        atual = ant2 + ant1;
        ant2 = ant1;
        ant1 = atual;
        soma+= atual;
    }
    media2 =(2*soma + sequencia)/(2*sequencia);

    return(media2);

}


int main()
{
    int termos, media;

    setlocale(LC_ALL,"");
    printf("Digite a quantidade de termos da sequência de Fibonacci:");
    scanf("%d", &termos);

    media = MediaFibonacci(termos);

    printf("A média é: %d", media);
    return 0;
}
