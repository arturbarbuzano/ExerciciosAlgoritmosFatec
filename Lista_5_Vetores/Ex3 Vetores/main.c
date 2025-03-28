#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    int vetor[6], i;
    int soma_quadrados=0;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite 6 números negativos:\n");
    do{
    for(i = 0; i < 6; i++) {
        do {
            printf("Número %d: ", i + 1);
            scanf("%d", &vetor[i]);
            if(vetor[i] >= 0) {
                printf("Por favor, insira um número negativo.\n");
            }
        } while(vetor[i] >= 0);
        soma_quadrados += vetor[i] * vetor[i];
    }
        if(soma_quadrados<1000)
        {
            printf("Soma dos quadrados menor que 1000, preciso de novos dados.\n");
        }
    }while(soma_quadrados<1000);

    printf("Soma dos quadrados é: %d", soma_quadrados);

    return 0;
}



