// Ao serem fornecidos dois vetores, faça em um terceiro vetor a união dos dois primeiros.

#include <stdio.h>
#define TF 5

int main()
{
    int v1[TF], v2[TF], vUniao[TF * 2], TLU = 0, i, pos;
    for (i = 0; i < TF; i++)
    {
        printf("Digite o %do. valor do primeiro vetor: \n", i + 1);
        scanf("%d", &v1[i]);
    }
    for (i = 0; i < TF; i++)
    {
        printf("Digite o %do. valor do segundo vetor: \n", i + 1);
        scanf("%d", &v2[i]);
    }
    // União
    for (int i = 0; i < TF; i++)
    {
        // verificando se o valor v1[i] está no vUniao
        pos = 0;
        while (pos < TLU && v1[i] != vUniao[pos])
            pos++;
        // se não achou, insere
        if (pos == TLU)
        {
            vUniao[TLU] = v1[i];
            TLU++;
        }
    }
    for (int i = 0; i < TF; i++)
    {
        pos = 0;
        while (pos < TLU && v2[i] != vUniao[pos])
            pos++;
        if (pos == TLU)
        {
            vUniao[TLU] = v2[i];
            TLU++;
        }
    }
    for (i = 0; i < TLU; i++)
    {
        printf("%d ", vUniao[i]);
    }
}