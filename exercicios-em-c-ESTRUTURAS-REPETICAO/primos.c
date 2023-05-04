/* Escreva um algoritmo que imprima todos os números primos existentes entre n1 e n2, onde n1 e n2 são números naturais fornecidos pelo usuário. */

#include <stdio.h>

int main ()
{
    int n1, n2,i, j, primo;
    printf("Digite dois numeros para compor o invervalo: \n");
    scanf("%d %d", &n1, &n2);
    for(i = n1; i<=n2; i++)
    {
        if (i == 0 || i == 1)
            primo = 0;
        else
        {
            primo = 1;
            for(j = 2; j < i; j++)
            {
                if (i%j == 0)
                    primo = 0;
            }
        }
        if (primo == 1)
            printf("%d ", i);
    }
    return 0;
}