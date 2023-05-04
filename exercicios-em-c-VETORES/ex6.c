/* Faça um algoritmo que receba as notas da primeira prova de vários alunos e armazene essas notas em um vetor. Receba as notas da segunda prova destes alunos e armazene-as em outro vetor. Calcule e exiba:
•	A Média da Turma;
•	A quantidade de alunos que obtiveram média menor que a média geral;
•	A quantidade de alunos aprovados, isto é, com média >= 7.0;
•	A quantidade de alunos reprovados, isto é, com média < 7.0.
*/

#include <stdio.h>
#define TR 5

int main ()
{
    float n1[TR], n2[TR], media_Turma, media_Aluno, soma=0, nota;
    int i, menor_geral=0, aprovado=0, reprovado=0;


    printf("Digite as notas da primeira prova: \n");
    for(i = 0; i < TR; i++)
    {
        do {
            printf("Aluno %d: ", i+1);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);

        n1[i] = nota;
        soma += nota;
    }

    printf("Digite as notas da segunda prova: \n");
    for(i = 0; i < TR; i++)
    {
        do {
            printf("Aluno %d: ", i+1);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);
        
        n2[i] = nota;
        soma += nota;
    }

    media_Turma = soma / (TR * 2);

    for(i = 0; i < TR; i++)
    {
        media_Aluno = (n1[i] + n2[i]) / 2;

        if (media_Aluno < media_Turma)
            menor_geral++;
        
        if(media_Aluno >= 7)
            aprovado++;
        else
            reprovado++;
    }

    printf("A media geral da turma foi de: %.2f\n", media_Turma);
    printf("%d alunos obtiveram a media menor que a media geral.\n", menor_geral);
    printf("%d alunos foram aprovados e %d foram reprovados.\n",aprovado,reprovado);


}