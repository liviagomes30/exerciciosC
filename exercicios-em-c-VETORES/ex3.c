/* Faça um algoritmo que carregue um vetor de 9 elementos numéricos inteiros; calcule e exiba os números primos e suas respectivas posições.*/

#include <stdio.h>
#define TR 9

int main ()
{
    int v1[TR], i, div, primo=0;
    printf("Digite os valores do vetor: \n");
    for(i = 0; i < TR ; i ++)
    {
        scanf("%d", &v1[i]);
    }

    for (i = 0 ; i < TR ; i++)
    {
        div = 0;
        for (int j = 2; j <= v1[i]/2; j++)
        {
            if((v1[i] % j) == 0)
            {
                div++;
                break;
            }
        }
        if (div == 0 && v1[i] > 1)
        {
            primo++;
            printf("O numero %d da posicao %d eh primo.\n", v1[i],i);
        }
    }
    if (primo == 0)
        printf("Nenhum numero primo encontrado.\n");
}