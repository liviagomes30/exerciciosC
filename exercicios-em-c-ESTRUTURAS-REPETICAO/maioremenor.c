/* Escreva um algoritmo que receba um conjunto de valores inteiros, calcule e exiba o maior e o menor valor do conjunto.
•	Para encerrar a entrada de dados, deve ser digitado o valor zero;
•	Para valores negativos, deve ser enviada uma mensagem;
•	Esses valores (zero e negativos) não entrarão nos cálculos. */


#include <stdio.h>

int main() {
    int valor, maior_valor = 0, menor_valor,cont=0;

    do {
        printf("Digite um valor inteiro (ou 0 para sair): ");
        scanf("%d", &valor);

        if(cont == 0)
        {
            menor_valor = valor;
            cont++;
        }

        if (valor < 0) {
            printf("Valor negativo nao permitido!\n");
        } else if (valor > 0) {
            if (valor > maior_valor) {
                maior_valor = valor;
            }
            if (valor < menor_valor) {
                menor_valor = valor;
            }
        }
    } while (valor != 0);

    printf("O maior valor digitado foi: %d\n", maior_valor);
    printf("O menor valor digitado foi: %d\n", menor_valor);

    return 0;
}


