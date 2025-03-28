#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 50

char nomes[MAX][100];
int idades[MAX];
float medias[MAX];

void Armazena(int alunos) {
    int i;
    for(i = 0; i < alunos; i++) {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", nomes[i]);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);
    }
}

void Media(int alunos) {
    int i, j;
    float soma, nota;
    for(i = 0; i < alunos; i++) {
        soma = 0;
        for(j = 0; j < 4; j++) {
            do {
                printf("Digite a nota %d do aluno %s (0 a 10): ", j + 1, nomes[i]);
                scanf("%f", &nota);
                if(nota < 0 || nota > 10) {
                    printf("Número inválido, por favor digite novamente.\n");
                }
            } while(nota < 0 || nota > 10);
            soma += nota;
        }
        medias[i] = soma / 4.0;
    }
}

float Maior_Media(int alunos) {
    int i;
    float maior = medias[0];
    for(i = 1; i < alunos; i++) {
        if(medias[i] > maior) {
            maior = medias[i];
        }
    }
    return maior;
}

void ExibaAlunos_Maior_Media(float maior_media, int alunos) {
    int i;
    printf("\nAlunos com a maior média (%.2f):\n", maior_media);
    for(i = 0; i < alunos; i++) {
        if(medias[i] == maior_media) {
            printf("Nome: %s\n", nomes[i]);
        }
    }
}

int main() {
    int alunos, i;
    char conceito;

    setlocale(LC_ALL, "");

    do {
        printf("Digite o número de alunos (entre 5 e 50 alunos): ");
        scanf("%d", &alunos);
        if(alunos < 5 || alunos > 50) {
            printf("Número inválido, digite novamente.\n");
        }
    } while(alunos < 5 || alunos > 50);

    Armazena(alunos);
    Media(alunos);

    float maior_media = Maior_Media(alunos);
    ExibaAlunos_Maior_Media(maior_media, alunos);

    for(i = 0; i < alunos; i++) {
        if(medias[i] >= 9) {
            conceito = 'A';
        } else if(medias[i] >= 7) {
            conceito = 'B';
        } else if(medias[i] >= 5) {
            conceito = 'C';
        } else {
            conceito = 'D';
        }
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
        printf("Média: %.2f\n", medias[i]);
        printf("Conceito: %c\n", conceito);
    }

    return 0;
}

