/* Fazer o controle dos laboratórios de informática de uma faculdade, não se sabe quantos laboratórios são, nem quantos micros em cada laboratório. Supor a seguinte entrada de dados: número dos laboratórios, número dos micros, RA dos alunos, sexo dos alunos e o tempo em minutos que este aluno se encontra no micro.

Faça um programa que conheça estes dados e informe:
a) qual laboratório (número) possui mais alunos;
b) qual aluno (RA) está a menos tempo no micro, em cada laboratório;
c) qual a porcentagem de mulheres em cada laboratório.
d) qual a porcentagem de homens entre todos os laboratórios */

#include <stdio.h>

int main()
{
    int num_lab, num_micro, RA, cont_alunos, mais_alunos=0, numlab_maisalunos, RA_menortempo, mulher,homem,total_alunos;
    char sexo;
    float tempo, menor_tempo;
    
    printf("Numero do laboratorio: \n");
    scanf("%d",&num_lab);
    while(num_lab>0)
    {
        printf("Digite o numero do micro: \n");
        scanf("%d", &num_micro);
        cont_alunos=0, mulher = 0;
        while(num_micro>0)
        {
            printf("Digite o RA: \n");
            scanf("%d",&RA);
            printf("Digite o sexo (F/M): \n");
            scanf(" %c", &sexo);
            printf("Digite o tempo em minutos: \n");
            scanf("%f", &tempo);
            if (cont_alunos == 0)
                menor_tempo = tempo;
            cont_alunos++;
            if(tempo<=menor_tempo)
            {
                menor_tempo = tempo;
                RA_menortempo = RA;
            }
            if(sexo == 'f' || sexo == 'F')
                mulher++;
            else
                homem++;
            printf("Digite o numero do micro: \n");
            scanf("%d", &num_micro);
        }
        total_alunos += cont_alunos;
        printf("O aluno %d esta a menos tempo no micro no lab %d.\n", RA_menortempo,num_lab);
        if(cont_alunos>mais_alunos)
        {
            mais_alunos=cont_alunos;
            numlab_maisalunos = num_lab;
        }
        printf("Porcentagem de mulheres no lab %d eh: %.2f%%\n", num_lab, ((mulher*1.0)/(cont_alunos))*100);
        printf("Numero do laboratorio: \n");
        scanf("%d",&num_lab);
    }
    
    printf("O laboratorio %d possui mais alunos.\n",numlab_maisalunos);
    printf("A porcentagem de homens entre todos os laboratorios eh: %.2f%%\n", ((homem*1.0)/total_alunos)*100);
}

