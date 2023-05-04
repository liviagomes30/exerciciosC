/* Fazer um algoritmo que calcule N! (fatorial N). Sendo que o valor de N encontra-se disponível em uma unidade de entrada e que:
a)	N! = 1 x 2 x 3 x ... x (N-1) x N;
b)	0! = 1, por definição. */


#include <stdio.h>

int main()
{
    int fat=1, num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for(int i = 1; i <= num-1; i++)
    {
        fat += fat * i;
    }

    printf("Fatorial de %d eh: %d", num, fat);    
}