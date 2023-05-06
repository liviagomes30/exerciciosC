// Faça um algoritmo que ao serem conhecidos 2 vetores com elementos inteiros positivos ordenados, seja retornado em um 3º vetor todos os elementos dos 2 vetores, mas de forma ordenada.

#include <stdio.h>
#define TF 7

int main()
{
    int vet1[TF], vet2[TF], vet3[TF * 2], TL1 = 0, TL2 = 0, TL3 = 0, i, j, num, pos;
    printf("Digite o %do. num do vet1: \n", TL1 + 1);
    scanf("%d", &num);
    while (TL1 < TF && num > 0)
    {
        pos = 0;
        while (pos < TL1 && num > vet1[pos])
            pos++;
        for (i = TL1; i > pos; i--)
        {
            vet1[i] = vet1[i - 1];
        }
        vet1[pos] = num;
        TL1++;
        if (TL1 < TF)
        {
            printf("Digite o %do. num do vet1: \n", TL1 + 1);
            scanf("%d", &num);
        }
    }
    printf("Digite o %do. num do vet2: \n", TL2 + 1);
    scanf("%d", &num);
    while (TL2 < TF && num > 0)
    {
        pos = 0;
        while (pos < TL2 && num > vet2[pos])
            pos++;
        for (i = TL2; i > pos; i--)
        {
            vet2[i] = vet2[i - 1];
        }
        vet2[pos] = num;
        TL2++;
        if (TL2 < TF)
        {
            printf("Digite o %do. num do vet2: \n", TL2 + 1);
            scanf("%d", &num);
        }
    }

    i = j = 0;
    while (i < TL1 && j < TL2)
    {
        if (vet1[i] < vet2[j])
        {
            vet3[TL3] = vet1[i];
            i++;
        }
        else
        {
            vet3[TL3] = vet2[j];
            j++;
        }
        TL3++;
    }
    while (i < TL1)
    {
        vet3[TL3] = vet1[i];
        i++;
        TL3++;
    }
    while (j < TL2)
    {
        vet3[TL3] = vet2[j];
        j++;
        TL3++;
    }

    for (i = 0; i < TL3; i++)
    {
        printf("%d ", vet3[i]);
    }
}