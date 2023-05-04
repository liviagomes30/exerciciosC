/* A conversão de graus Farenheit (F) para Centígrados (C) é obtida por C = 5/9*(F-32). Faça um algoritmo que calcule e exiba uma tabela de graus Centígrados e graus Farenheit, que variam de 50 a 65 de 1 em 1 grau. */

#include <stdio.h>

int main() {
    int f;
    float c;

    printf("Farenheit\tCentigrados\n");
    printf("--------------------------\n");

    for (f = 50; f <= 65; f++) {
        c = 5.0 / 9.0 * (f - 32);
        printf("%d\t\t%.2f\n", f, c);
    }

    return 0;
}