/* Elabore um algoritmo que conheça um vetor de n  elementos, sendo que estes elementos podem se repetir. Possibilite a consulta de um determinado elemento, informando quantas vezes este aparece e em quais posições se encontram. A consulta deve ser disponibilizada até o Usuário decidir não mais executá-la.*/

#include <stdio.h>
#define TR 5

int main()
{
    int v[TR], elemento, i, cont;
    char resposta;
    for(i = 0; i < TR; i++)
    {
        printf("Digite o %do. valor do vetor: \n", i+1);
        scanf("%d", &v[i]);
    }
    
    do {
        
        printf("\nDigite o elemento que deseja consultar: ");
        scanf("%d", &elemento);

        
        cont = 0;
        printf("\nO elemento %d aparece nas posicoes: ", elemento);
        for (i = 0; i < TR; i++) 
        {
            if (v[i] == elemento) 
            {
                printf("%d ", i);
                cont++;
            }
        }

        
        printf("\nO elemento %d aparece %d vezes no vetor.\n", elemento, cont);

        
        printf("\nDeseja realizar uma nova consulta? (S/N): ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

}