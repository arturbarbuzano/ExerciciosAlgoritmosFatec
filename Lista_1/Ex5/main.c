#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    printf("Digite o numero:\n");
    scanf("%i",&a);

    printf("Digite o numero:\n");
    scanf("%i",&b);

    if(a%2==0) {
        printf("E par\n");
    }
    else
        printf("E impar\n");


      if(b%2==0) {
        printf("E par\n");
      }
    else
        printf("E impar\n");

    return 0;
}

