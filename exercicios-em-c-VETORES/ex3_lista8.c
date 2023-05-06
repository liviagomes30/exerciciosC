// Faça um algoritmo que após serem conhecidos os valores de um vetor. Retorne um segundo vetor, de tal forma que elementos negativos do primeiro vetor ocupem as posições iniciais, e que os elementos positivos ocupem as posições finais do vetor 2.

#include <stdio.h>
#define TF 5

int main()
{
    int v1[TF], v2[TF], i, num, TL = 0, negativos, positivos;
    printf("Digite um numero positivo ou negativo para inserir no vetor: \n");
    scanf("%d", &num);

    while (TL < TF)
    {
        v1[TL] = num;
        TL++;
        if (TL < TF)
        {
            printf("Digite um numero positivo ou negativo para inserir no vetor: \n");
            scanf("%d", &num);
        }
    }

    negativos = 0;
    positivos = TL - 1;

    for (i = 0; i < TL; i++)
    {
        if (v1[i] < 0)
        {
            v2[negativos] = v1[i];
            negativos++;
        }
        else
        {
            v2[positivos] = v1[i];
            positivos--;
        }
    }

    printf("Vetor resultante:\n");
    for (int i = 0; i < TL; i++)
    {
        printf("%d ", v2[i]);
    }
    printf("\n");
}