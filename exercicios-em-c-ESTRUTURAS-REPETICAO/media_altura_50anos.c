/* Faça um algoritmo que receba a idade e a altura de várias pessoas. Calcule e exiba a média das alturas das pessoas com mais de 50 anos. Para encerrar a entrada de dados, digite uma idade negativa ou igual a zero. */

#include <stdio.h>

int main() {
    int idade;
    float altura, soma_altura = 0.0;
    int num_pessoas = 0;

    do {
        printf("Digite a idade da pessoa (ou um valor negativo para sair): ");
        scanf("%d", &idade);

        if (idade > 0) {
            printf("Digite a altura da pessoa: ");
            scanf("%f", &altura);

            if (idade > 50) {
                soma_altura += altura;
                num_pessoas++;
            }
        }
    } while (idade > 0);

    if (num_pessoas > 0) {
        float media_altura = soma_altura / num_pessoas;
        printf("A media das alturas das pessoas com mais de 50 anos e: %.2f\n", media_altura);
    } else {
        printf("Nenhuma pessoa com mais de 50 anos foi encontrada!\n");
    }

    return 0;
}


