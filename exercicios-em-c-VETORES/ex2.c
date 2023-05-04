/* Faça um algoritmo que carregue 1 vetor de 6 elementos numéricos inteiros; calcule e exiba a quantidade de números pares e a quantidade de números ímpares.*/

#include <stdio.h>
#define TR 6

int main () 
{
    int v1[TR],i,par=0, impar =0;
    printf("Digite os valores do vetor: \n");
    for (i=0; i < TR; i++)
    {
        scanf("%d", &v1[i]);
        if((v1[i] % 2) == 0)
            par++;
        else    
            impar++;
    }
    printf("%d numeros pares e %d numeros impares", par, impar);
    
}