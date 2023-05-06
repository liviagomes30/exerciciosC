// Ao ser fornecido um vetor, uma posição e um elemento, insira o elemento na posição especificada, sem perder o valor anteriormente conhecido.

#include <stdio.h>
#define TF 5

int main()
{
    int vet[TF], TL = 0, i, num, pos;
    printf("Digite um numero para inserir no vetor: \n");
    scanf("%d", &num);
    while (TL < TF && num > 0)
    {
        vet[TL] = num;
        TL++;
        if (TL < TF)
        {
            printf("Digite um numero para inserir no vetor: \n");
            scanf("%d", &num);
        }
    }
    printf("Digite a posicao onde o elemento sera inserido: ");
    scanf("%d", &pos);
    printf("Digite o elemento a ser inserido: ");
    scanf("%d", &num);

    for (i = TL - 1; i >= pos; i--)
    {
        vet[i + 1] = vet[i];
    }

    // Insere o elemento na posição especificada
    vet[pos] = num;

    // Imprime o vetor com o novo elemento
    printf("Novo vetor:\n");
    for (i = 0; i < TL + 1; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}