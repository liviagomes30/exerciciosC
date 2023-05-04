/* Faça um algoritmo que apresenta todos os números que são divididos por 4 até que eles sejam menores que 200. */

#include <stdio.h>

int main()
{
    int i;
    for(i = 1; i < 200; i++)
    {
        if(i % 4 == 0)
            printf("%d\n", i);
    }
    return 0;
}