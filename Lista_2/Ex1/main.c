#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, raiz1, raiz2;

    // Solicita os coeficientes da equação do segundo grau
    printf("Digite o valor de a (diferente de 0): ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Verifica se a é diferente de 0
    if (a == 0) {
        printf("O valor de a deve ser diferente de 0 para formar uma equação do segundo grau.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Calcula o discriminante (delta)
    delta = b * b - 4 * a * c;

    // Verifica a existência de raízes reais
    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        // Uma única raiz real
        raiz1 = -b / (2 * a);
        printf("A equação possui uma raiz real: %.2f\n", raiz1);
    } else {
        // Duas raízes reais
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação possui duas raízes reais: %.2f e %.2f\n", raiz1, raiz2);
    }

    return 0;
}
