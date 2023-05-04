/* Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado no mercado. Para isso, forneceu o sexo do entrevistado e sua resposta (sim ou não). Sabendo-se que foram entrevistados 2.000 pessoas, fazer um algoritmo que calcule e escreva:
a)	o número de pessoas que responderam sim;
b)	o número de pessoas que responderam não;
c)	a porcentagem de pessoas do sexo feminino que responderam sim;
d)	a porcentagem de pessoas do sexo masculino que responderam não */


#include <stdio.h>

int main()
{
    int total = 2000, sim = 0, nao = 0, sim_fem = 0, nao_mas = 0, resposta;
    char sexo;
    float porcent_fem, porcent_mas;
    for(int i = 1; i <= total; i++)
    {
        printf("Insira o sexo (M/F): \n");
        fflush(stdin);
        scanf("%c", &sexo);
        printf("Gostou do novo produto lancado? Digite 1 para sim e 2 para nao: \n");
        scanf("%d", &resposta);
        if (resposta == 1)
        {
            sim++;
            if (sexo == 'F' || sexo == 'f')
                sim_fem++;
        }
        else 
        {
            nao++;
            if (sexo == 'M' || sexo == 'm')
                nao_mas++;
        }
    }
    porcent_fem = ((float)sim_fem / total) * 100;
    porcent_mas = ((float)nao_mas / total) * 100;
    printf("%d pessoas responderam sim e %d pessoas responderam nao\n", sim, nao);
    printf("Porcentagem de pessoas do sexo feminino que responderam sim: %.2f%\n",  porcent_fem);
    printf("Porcentagem de pessoas do sexo masculino que responderam nao: %.2f %\n",  porcent_mas);
    return 0;
}