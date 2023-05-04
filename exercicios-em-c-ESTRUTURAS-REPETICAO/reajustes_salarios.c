/* Uma empresa possui algumas categorias de funcionários descritas abaixo. Faça um algoritmo que receba os códigos correspondente ao cargo de seus funcionários e exiba, o seu cargo, o percentual de aumento ao qual este funcionário tem direito seguindo a tabela abaixo, e também, o salário reajustado:

Código	Cargo	      Percentual
1	    Escriturário	50%
2	    Secretário	    35%
3	    Caixa	        20%
4	    Gerente	        10%
5	    Diretor	        Não tem aumento */


#include <stdio.h>

int main() {
    int codigo;
    float salariobase, salariofinal;
    
    printf("Código\tCargo\n");
    printf("---------------------\n");
    printf("1\tEscriturário\n2\tSecretario\n3\tCaixa\n4\tGerente\n5\tDiretor\n");
    printf("\nDigite o código do cargo: ");
    scanf("%d", &codigo);
    printf("\nDigite o salario: ");
    scanf("%f", &salariobase);
    
    switch(codigo)
    {
        case 1:
        salariofinal = salariobase*1.50;
        printf("O salário final será de %.2f",salariofinal);
        break;
        case 2:
        salariofinal = salariobase*1.35;
        printf("O salário final será de %.2f",salariofinal);
        break;
        case 3:
        salariofinal = salariobase*1.2;
        printf("O salário final será de %.2f",salariofinal);
        break;
        case 4:
        salariofinal = salariobase*1.1;
        printf("O salário final será de %.2f",salariofinal);
        break;
        case 5:
        printf("O cargo selecionado não terá aumento de salário");
        break;
    }
    
    return 0;
}

