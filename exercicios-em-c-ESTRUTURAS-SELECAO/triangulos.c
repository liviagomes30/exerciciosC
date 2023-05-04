/* Dados três valores A, B, C, verificar se eles podem ser os comprimentos dos lados de um triângulo, se forem, verificar se compõem um triângulo eqüilátero, isósceles ou escaleno. Informar se não compuserem nenhum triângulo.
Dados de entrada: três lados de um suposto triângulo (A, B, C).
Dados de saída – mensagens: não compõem triângulo, triângulo eqüilátero, triângulo isósceles, triângulo escaleno.

O que é um triângulo?
Uma figura geométrica fechada de três lados, em que cada um é menor que a soma dos outros dois.

O que é um triângulo eqüilátero?
Um triângulo com três lados iguais.

O que é um triângulo isósceles?
Um triângulo com dois lados iguais.

O que é um triângulo escaleno?
Um triângulo com todos os lados diferentes. */


#include<stdio.h>

int main(){

    int l1, l2, l3;

    printf ("Informe o lado 1 do triangulo: ");
    scanf ("%d", &l1);
    printf ("Informe o lado 2 do triangulo: ");
    scanf ("%d", &l2);
    printf ("Informe o lado 3 do triangulo: ");
    scanf ("%d", &l3);

    if (l1 + l2 >= l3 && l1 + l3 >= l2 && l2 + l3 >= l1)
    {
        if (l1 == l2 && l2 == l3 && l3 == l1){
            printf ("Triangulo Equilatero");
        }
        else if (l1 == l2 || l2 == l3 || l3 == l1){
            printf ("Triangulo Isosceles");
        }
        else if (l1 != l2 && l2 != l3 && l3 != l1){
            printf ("Triangulo Escaleno");
        }
    }
    else
        printf ("Valores invalidos para formar um triangulo");
    return 0;
}