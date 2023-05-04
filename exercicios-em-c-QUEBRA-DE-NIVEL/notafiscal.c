/* Em uma empresa anota-se diariamente as vendas do dia. Essas anotações são feitas em notas fiscais.

Sabe-se que em cada nota fiscal tem-se:
	- número da nota fiscal;
	- total da nota fiscal;
	- os códigos dos produtos (um ou mais produtos);
	- valor unitário de cada produto;
	- quantidade vendida;
	- valor total de cada produto.

Sabe-se que para finalizar os produtos de cada nota fiscal é digitado o número zero. E também para a finalização das notas digita-se o número zero.

A partir da leitura de todas as notas fiscais, faça um algoritmo que calcule:
a)	O total de venda de cada nota fiscal;
b)	O total de todas as vendas;
c)	O produto com a maior quantidade vendida em cada nota fiscal;
d)	O produto com a menor quantidade vendida entre todas as notas fiscais;
e)	O produto com o menor preço em cada nota fiscal;
f)	O produto com o maior preço de todas as notas fiscais;
g)	 A nota fiscal que obteve a menor venda. */


#include <stdio.h>

int main()
{
    int cod_me_q, maior_qtde, cod_ma_q, qtde, cod_ma_p, cod_me_p, cod_ma_p_t, NF_menor_vendas, menor_qtde, cod_me_q_t, NF,cod, menor_qtde_t,cont=0;
    float precoU, total, total_NF, maior_preco, menor_preco, total_vendas=0, maior_preco_t=0, menor_vendas;
    printf("Nota fiscal: \n");
    scanf("%d",&NF);
    
    while(NF>0)
    {
        total_NF=0, maior_qtde=0, maior_preco=0;
        printf("Codigo do produto: \n");
        scanf("%d",&cod);
        while(cod>0)
        {
            printf("Quantidade: \n");
            scanf("%d",&qtde);
            printf("Preço unitario: \n");
            scanf("%f", &precoU);
            total = qtde*precoU;
            printf("Total do item: %.2f \n",total);
            if (total_NF == 0)
            {
                menor_qtde = qtde;
                menor_preco = precoU;
            }
            total_NF = total_NF  + total;
            if(qtde > maior_qtde)
            {
                maior_qtde = qtde;
                cod_ma_q = cod;
            }
            if(qtde <= menor_qtde)
            {
                menor_qtde = qtde;
                cod_me_q = cod;
            }
            if(precoU > maior_preco)
            {
                maior_preco = precoU;
                cod_ma_p = cod;
            }
            if(precoU <= menor_preco)
            {
                menor_preco = precoU;
                cod_me_p = cod;
            }
            printf("Codigo do produto: \n");
            scanf("%d", &cod);
        }
        if (cont == 0)
        {
            menor_qtde_t = menor_qtde;
            menor_vendas = total_NF;
            cont++;
        }
        printf("Total nota: %.2f \n",total_NF);
        total_vendas = total_vendas + total_NF;
        printf("O produto %d da nota %d tem a maior qtde vendida\n", cod_ma_q, NF);
        printf("O produto %d da nota %d tem a menor quantidade vendida\n", cod_me_q, NF);
        printf("O produto %d da nota %d tem o menor preço\n", cod_me_p, NF);
        if(maior_preco>maior_preco_t)
        {
            maior_preco_t = maior_preco;
            cod_ma_p_t = cod_ma_p;
        }
        if(menor_vendas>=total_NF)
        {
            menor_vendas = total_NF;
            NF_menor_vendas = NF;
        }
        if(menor_qtde_t>=menor_qtde)
        {
            menor_qtde_t = menor_qtde;
            cod_me_q_t = cod_me_q;
        }
        printf("Nota fiscal: \n");
        scanf("%d",&NF);
    }
    printf("Total de todas as vendas: %.2f\n", total_vendas);
    printf("O produto %d teve a menor quatidade vendida entre todas as notas\n",cod_me_q_t);
    printf("O produto %d tem o maior preco de todas as notas\n", cod_ma_p_t);
    printf("A nota fiscal %d obteve a menor venda\n", NF_menor_vendas);
    return 0;
}

