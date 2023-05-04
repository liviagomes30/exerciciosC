/* Fazer um algoritmo que, dados 100 números inteiros positivos, calcule e imprima os que são números perfeitos.
Um Número Perfeito é um número natural que é igual à soma dos seus divisores próprios. 
Chamam-se divisores próprios de um número a todos os seus divisores diferentes dele próprio.
    Exemplos:
•	6=1+2+3
•	28=1+2+4+7+14 */


#include<stdio.h>
 
int main(){
    int numero; //variável para fazer um loop de 1 até intervalo
    int divisor; //variável para fazer loop em busca de divisores
    
    for(numero=1; numero<=100; numero++){ 
        int soma = 0; //cada número i recebe uma variável para sua soma.
        
        for(divisor=1; divisor<numero; divisor++){ //testa todos os divisores 
            if(numero%divisor == 0)//para ser um divisor, o resto deve ser zero
            { 
                soma+=divisor; //se for divisor, incrementa soma
                
            }
        }
        
        if(soma==numero)
            printf("O numero %d e perfeito\n", numero);//imprime na linha e pula
        //volta para o primeiro for e testa o próximo número
    }
    return 0;
}
 
