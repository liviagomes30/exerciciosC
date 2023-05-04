/* Elabore um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de três e que se encontram no conjunto dos números de 1 até 500. */

#include <stdio.h>

int main()
{
    int i = 1, somador = 0;
    while(i<=500)
    {
        if (((i%3)==0) && ((i%2) != 0))
            somador = somador + i;
        i++;
    }
    printf("A soma de todos os impares multiplos de 3 do intervalo [1,500] eh: %d", somador);
    return 0;
};

