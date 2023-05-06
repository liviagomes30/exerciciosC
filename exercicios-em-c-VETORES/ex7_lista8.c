// Ao serem fornecidos dois vetores, faça em um terceiro vetor a interseção dos dois primeiros.

#include <stdio.h>
#define TF 5

int main()
{
    int v1[TF], v2[TF], vInter[TF * 2], TLU = 0, i, pos;
    for (i = 0; i < TF; i++)
    {
        printf("Digite o %do. valor para inserir no vetor 1: \n", i + 1);
        scanf("%d", &v1[i]);
    }
    for (i = 0; i < TF; i++)
    {
        printf("Digite o %do. valor para inserir no vetor 2: \n", i + 1);
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < TF; i++)
    {
        pos = 0;
        while (pos < TF && v1[i] != v2[pos])
        {
            pos++;
        }
        if (pos < TF)
        {
            pos = 0;
            while (pos < TLU && v1[i] != vInter[pos])
                pos++;
            if (pos == TLU)
            {
                vInter[TLU] = v1[i];
                TLU++;
            }
        }
    }

    // Impressão do vetor de interseção
    printf("Vetor de Intersecao: ");
    for (i = 0; i < TLU; i++)
    {
        printf("%d ", vInter[i]);
    }

    return 0;
}