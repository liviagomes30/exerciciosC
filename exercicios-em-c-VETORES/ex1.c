/* Faça um algoritmo que carregue 2 vetores de 10 elementos numéricos cada um e exiba um vetor resultante da intercalação desses 2 vetores.*/

#include <stdio.h>
#define TR 10

int main(){
    int v1[TR], v2[TR], v3[TR*2], i;
    
    printf("Digite os valores do primeiro vetor:\n");
    for (i = 0; i < TR; i++) 
    {
    scanf("%d", &v1[i]);
    }

    printf("Digite os valores do segundo vetor:\n");
    for (i = 0; i < TR; i++) 
    {
        scanf("%d", &v2[i]);
    }

    for(i=0 ; i < TR; i++)
    {
        v3[i*2] = v1[i];
        v3[i*2+1] = v2[i];
    }

    printf("\nVetor 1: \n");
    for (int i = 0; i < TR; i++) 
    {
        printf("%d",v1[i]);
    }

    printf("\nVetor 2: \n");
    for (int i = 0; i < TR; i++) 
    {
        printf("%d",v2[i]);
    }

    printf("\nVetor 3: \n");
    for (int i = 0; i < TR*2; i++) 
    {
        printf("%d",v3[i]);
    }

}