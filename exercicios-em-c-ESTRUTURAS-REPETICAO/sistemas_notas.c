/* O sistema de avaliação de uma determinada disciplina obedece aos seguintes critérios:
•	durante o semestre são dadas três notas;
•	a nota final é obtida pela média aritmética das notas dadas durante o curso;
•	é considerando aprovado o aluno que obtiver a nota final superior ou igual a 6,0 e que tiver comparecido a um mínimo de 40 aulas.
Fazer um algoritmo que:
a)	leia um conjunto de dados contendo o número de matrícula, as três notas e a freqüência (número de aulas freqüentadas) de 100 alunos;
b)	Calcule e exiba:
•	a nota final de cada aluno;
•	a maior e menor nota da turma;
•	a nota média da turma;
•	o total de alunos reprovados;
•	a porcentagem de alunos reprovados por faltas. */


#include <stdio.h>

int main()
{
    int n1, n2, n3, freq, matri, i=1, reprovado=0, aprovado=0, repro_falta=0;
    float media,maior=0,menor = 10, soma=0;
    while (i <= 5)
    {
        printf("Digite as 3 notas: \n");
        scanf("%d %d %d", &n1, &n2, &n3);
        printf("Digite o número da matrícula: \n");
        scanf("%d", &matri);
        printf("Digite o numero de aulas frequentadas: \n");
        scanf("%d", &freq);
        media = (n1+n2+n3)/(float)3;
        printf("A media final eh: %.2f", media);
        soma = soma + media;
        if (media > maior)
            maior = media;
        if(media < menor)
            menor = media;
        if (media < 6 || freq < 40)
            reprovado++;
        else
            aprovado++;
        if (freq < 40)
            repro_falta++;
        i++;
    }

    printf("A maior nota da turma eh: %.2f\n", maior);
    printf("A menor nota da turma eh: %.2f\n", menor);
    printf("A nota media da turma eh: %.2f\n", soma/100);
    printf("O total de alunos reprovados eh: %d", reprovado);
    printf("A porcentagem de alunos reprovados por falta eh: %d%", (repro_falta/5)*5);

}