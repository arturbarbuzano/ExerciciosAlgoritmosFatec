#include <stdio.h>
#include <stdlib.h>

int main()

{
    int numidentificacao;
    float Nota1, Nota2, Nota3;
    float mediaex, mediaaproveitamento;

    printf("Digite o numero de identificacao:\n");
    scanf("%d", &numidentificacao);

    do{
    printf("Digite a primeira Nota:\n");
    scanf("%f", &Nota1);
    }while(Nota1<0);

    do{
    printf("Digite a segunda Nota:\n");
    scanf("%f", &Nota2);
    }while(Nota2<0);

    do{
    printf("Digite a terceira Nota:\n");
    scanf("%f", &Nota3);
    }while(Nota3<0);

    do{
    printf("Digite a media dos exercicios:\n");
    scanf("%f", &mediaex);
    }while(mediaex<0);

    mediaaproveitamento = (Nota1 + Nota2*2 + Nota3*3 + mediaex)/7;

    if(mediaaproveitamento>=9)
    {
        printf("O numero do aluno e': %d\n", numidentificacao);
        printf("A primeira Nota e': %f\n", Nota1);
        printf("A segunda Nota e': %f\n", Nota2);
        printf("A terceira Nota e': %f\n", Nota3);
        printf("A media dos exercicios e': %f\n", mediaex);
        printf("A media de aproveitamento do aluno e': %f\n", mediaaproveitamento);
        printf("Conceito A\n");
        printf("APROVADO\n");
    }
        else if(mediaaproveitamento>=7.5)
    {
        printf("O numero do aluno e': %d\n", numidentificacao);
        printf("A primeira Nota e': %f\n", Nota1);
        printf("A segunda Nota e': %f\n", Nota2);
        printf("A terceira Nota e': %f\n", Nota3);
        printf("A media dos exercicios e': %f\n", mediaex);
        printf("A media de aproveitamento do aluno e': %f\n", mediaaproveitamento);
        printf("Conceito B\n");
        printf("APROVADO\n");
    }
        else if(mediaaproveitamento>=6)
    {
        printf("O numero do aluno e': %d\n", numidentificacao);
        printf("A primeira Nota e': %f\n", Nota1);
        printf("A segunda Nota e': %f\n", Nota2);
        printf("A terceira Nota e': %f\n", Nota3);
        printf("A media dos exercicios e': %f\n", mediaex);
        printf("A media de aproveitamento do aluno e': %f\n", mediaaproveitamento);
        printf("Conceito C\n");
        printf("APROVADO\n");
    }
        else if(mediaaproveitamento>=4)
    {
        printf("O numero do aluno e': %d\n", numidentificacao);
        printf("A primeira Nota e': %f\n", Nota1);
        printf("A segunda Nota e': %f\n", Nota2);
        printf("A terceira Nota e': %f\n", Nota3);
        printf("A media dos exercicios e': %f\n", mediaex);
        printf("A media de aproveitamento do aluno e': %f\n", mediaaproveitamento);
        printf("Conceito D\n");
        printf("REPROVADO\n");
    }
        else if(mediaaproveitamento<4)
    {
        printf("O numero do aluno e': %d\n", numidentificacao);
        printf("A primeira Nota e': %f\n", Nota1);
        printf("A segunda Nota e': %f\n", Nota2);
        printf("A terceira Nota e': %f\n", Nota3);
        printf("A media dos exercicios e': %f\n", mediaex);
        printf("A media de aproveitamento do aluno e': %f\n", mediaaproveitamento);
        printf("Conceito E\n");
        printf("REPROVADO\n");
    }
    return 0;
}
