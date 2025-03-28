#include <stdio.h>

int main()
{
   int codigo;
   int quantidade;
   float precofinal;

   do
   {
   printf("Digite o codigo:");
   scanf("%d", &codigo);

   if(codigo==1001)
   {
       printf("\nDigite a quantidade:");
       scanf("%d", &quantidade);
       precofinal=quantidade*5.32;
       printf("\nO preco final e': %f", precofinal);
       break;
   }

   else if(codigo==1324)
   {
       printf("\nDigite a quantidade:");
       scanf("%d", &quantidade);
       precofinal=quantidade*6.45;
       printf("\nO preco final e': %f", precofinal);
       break;
   }

   else if(codigo==6548)
   {
       printf("\nDigite a quantidade:");
       scanf("%d", &quantidade);
       precofinal=quantidade*2.37;
       printf("\nO preco final e': %f", precofinal);
       break;
   }

   else if(codigo==987)
   {
       printf("\nDigite a quantidade:");
       scanf("%d", &quantidade);
       precofinal=quantidade*5.32;
       printf("\nO preco final e': %f", precofinal);
       break;
   }

   else if(codigo==7623)
   {
       printf("\nDigite a quantidade:");
       scanf("%d", &quantidade);
       precofinal=quantidade*6.45;
       printf("\nO preco final e': %f", precofinal);
       break;
   }
   }while(codigo!=1001 || codigo!=1324 || codigo!=6548 || codigo!=987 || codigo!=7623);
    return 0;
}
