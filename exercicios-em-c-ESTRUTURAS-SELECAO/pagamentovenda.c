/* Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de venda e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para informar qual a condição de pagamento escolhida pelo Usuário e efetue o cálculo adequado.
Depois de executado o cálculo, deve-se informar ao Usuário o valor de venda, o valor do desconto ou juros, e o valor total a ser pago.

Código	Condição de Pagamento
1	     À vista em dinheiro ou cheque, recebe 10% de desconto.
2	     À vista no cartão de crédito, recebe 5% de desconto.
3	     Em 2 vezes, preço normal de venda sem juros.
4	     Em 3 vezes, preço normal de venda mais juros de 10%. */


#include<stdio.h>

int main(){
    int cod;
    float produto, reajuste, produtofinal;
    printf("Digite o valor normal de venda do produto: ");
    scanf("%f", &produto);
    printf("Digite o codigo da forma de pagamento: ");
    scanf("%d", &cod);
    switch(cod){
        case 1:
            reajuste = produto*0.1;
            produtofinal = produto - reajuste;
            printf("O valor de venda do produto eh: %.2f\nO valor de desconto eh de: %.2f\nO valor total a ser pago eh: %.2f",produto,reajuste,produtofinal);
            break;
        case 2:
            reajuste = produto*0.05;
            produtofinal = produto - reajuste;
            printf("O valor de venda do produto eh: %.2f\nO valor de desconto eh de: %.2f\nO valor total a ser pago eh: %.2f",produto,reajuste,produtofinal);
            break;
        case 3:
            reajuste = 0;
            produtofinal = produto;
            printf("O valor de venda do produto eh igual ao valor total a ser pago: %.2f",produto);
            break;
        case 4:
            reajuste = produto*0.1;
            produtofinal = produto + reajuste;
            printf("O valor de venda do produto eh: %.2f\nO valor de juros eh de: %.2f\nO valor total a ser pago eh: %.2f",produto,reajuste,produtofinal);
            break;
    }
    
    return 0;
}
