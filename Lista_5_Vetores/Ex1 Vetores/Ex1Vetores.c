#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"");
   int vetor[12], i;

   do{
   for(i=0;i<12;i++)
   {
       printf("Digite um n�mero qualquer: ");
       scanf("%d", &vetor[i]);
       if(vetor[i]<=0)
       {
           printf("N�mero negativo, por favor digite novamente.\n");
       }
   }
   } while(vetor[i]<0);

   for(i=0;i<12;i++)
   {
   if(vetor[i]>121)
   {
       printf("\nN�mero maior que 121:");
       printf("\n%d", vetor[i]);
   }
   }
    return 0;
}
