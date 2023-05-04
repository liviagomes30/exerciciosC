/* Desenvolva um algoritmo que receba a quantidade de peças vendidas por cada vendedor e armazene essas quantidades em um vetor. Receba também o preço da peça vendida de cada vendedor e armazene esses preços em outro vetor. 
	Existem apenas 10 vendedores, e cada vendedor pode vender apenas um tipo de peça, isto é, para cada vendedor existe apenas um preço.
	Calcule e exiba a quantidade total de peças vendidas por todos vendedores e, para cada vendedor, calcule e exiba o valor total da venda.
*/

#include <stdio.h>
#define TR 10

int main () 
{
    int qtde[TR], i,total_geral = 0;
    float preco[TR], total_venda;
    for ( i = 0; i < TR ; i++)
    {
        total_venda = 0;
        printf("Digite a quantidade vendida e o valor da peca do %do. vendedor: \n", i+1);
        scanf("%d %f", &qtde[i], &preco[i]);
        total_venda = qtde[i] * preco[i];
        printf("Total da venda do %do. vendedor: %.2f.\n\n", i+1, total_venda);
        total_geral += qtde[i];
    }
    printf("Total de pecas vendidas por todos os vendedores: %d\n", total_geral);
}