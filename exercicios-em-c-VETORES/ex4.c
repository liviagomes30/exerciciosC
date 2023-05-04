/* Faça um algoritmo que receba a temperatura média de cada mês do ano e armazene essas temperaturas em um vetor; calcule e exiba a maior e a menor temperatura do ano e em que mês estas temperaturas aconteceram.*/

#include <stdio.h>
#define TR 12

int main () 
{
    int i;
    float v[TR], maior=0, menor;
    for(i = 0 ; i < TR ; i++)
    {
        printf("Digite a temperatura do %do. mes: \n", i+1);
        scanf("%f", &v[i]);
        if (i == 0)
            menor = v[i];
        if (menor > v[i])
            menor = v[i];
        if (maior < v[i])
            maior = v[i];
    }
    printf("O maior valor do vetor eh: %.2f\n",maior);
    printf("O menor valor do vetor eh: %.2f\n",menor);
}