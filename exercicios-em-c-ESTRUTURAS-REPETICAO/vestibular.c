/* Uma universidade deseja fazer um levantamento a respeito de seu concurso vestibular. Para cada curso, é fornecido o seguinte conjunto de valores:
•	o código do curso;
•	número de vagas;
•	número de candidatos do sexo masculino;
•	número de candidatos do sexo feminino.
O último conjunto, para indicar fim de dados, contém o código do curso igual a zero.
Fazer um algoritmo que:
•	calcule e escreva, para cada curso, o número de candidatos por vaga e porcentagem de candidatos do sexo feminino (escreva também o código correspondente do curso);
•	determine o maior número de candidatos por vaga e escreva esse número juntamente com o código do curso correspondente (supor que não haja empate);
•	calcule e escreva o total de candidatos. */


#include <stdio.h>

int main ()
{
    int cod, vagas, num_mas, num_fem, total = 0, cod_maior;
    float cand_vaga, maior = 0;
    printf("Digite o codigo do curso: \n");
    scanf("%d", &cod);
    while (cod > 0)
    {   
        printf("Digite o numero de vagas: \n");
        scanf("%d", &vagas);
        printf("Digite o numero de candidatos do sexo feminino: \n");
        scanf("%d", &num_fem);
        printf("Digite o numero de candidatos do sexo masculino: \n");
        scanf("%d", &num_mas);
        printf("\nCodigo do curso: %d\n", cod);
        cand_vaga = (num_fem+num_mas)/(vagas*0.1);
        printf("Numero de candidatos por vaga: %.2f candidatos por vaga\n", cand_vaga);
        printf("Porcentagem de candidatos do sexo feminino: %.2f %\n", (num_fem*0.1)/(num_fem+num_mas)*100);
        total += (num_fem+num_mas);
        if (cand_vaga > maior)
        {
            maior = cand_vaga;
            cod_maior = cod;
        }
        printf("\nDigite o codigo do curso: \n");
        scanf("%d", &cod);
    }
    printf("\nO maior numero de candidatos por vaga eh: %.2f, que corresponde ao curso de codigo: %d", maior, cod_maior);
    printf("\nO total de candidatos no geral eh: %d", total);

}