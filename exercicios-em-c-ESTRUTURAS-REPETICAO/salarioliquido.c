/* Faça um algoritmo que receba o valor do salário mínimo, o número de horas trabalhadas, o número de dependentes dos funcionários de uma Empresa qualquer, e a quantidade de horas extras trabalhadas. Calcule e exiba o salário a receber do funcionário seguindo as regras abaixo:
•	o valor da hora trabalhada é igual a 1/5 do salário mínimo;
•	o salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
•	para cada dependente acréscimo de R$ 32,00;
•	para cada hora extra trabalhada o cálculo do valor da hora trabalhada acrescida de 50%;
•	o salário bruto é igual ao salário do mês adicionado dos valores dos dependentes e dos valores de horas extras;
•	o cálculo do valor do imposto de renda retido na fonte segue a tabela abaixo:

IRRF	   Salário Bruto
Isento	 Inferior a R$ 200,00
10%	     De R$ 200,00 até R$ 500,00
20%	     Superior a R$ 500,00

•	o salário líquido é igual ao salário bruto subtraído do IRRF;
•	a gratificação segue a próxima tabela:

Salário Líquido	       Gratificação
Até R$ 350,00	          R$ 100,00
Superior a R$ 350,00	  R$ 50,00

•	o salário a receber do funcionário é igual ao salário líquido adicionado da gratificação. */


#include <stdio.h>

int main() {
  float salario_minimo, valor_hora_trabalhada, salario_mes, acrescimo_dependentes, acrescimo_horas_extras, salario_bruto, irrf, salario_liquido, gratificacao, salario_a_receber;
  int horas_trabalhadas, dependentes, horas_extras;

  // Recebendo os valores de entrada
  printf("Digite o valor do salário mínimo: ");
  scanf("%f", &salario_minimo);

  printf("Digite o número de horas trabalhadas: ");
  scanf("%d", &horas_trabalhadas);

  printf("Digite o número de dependentes: ");
  scanf("%d", &dependentes);

  printf("Digite a quantidade de horas extras trabalhadas: ");
  scanf("%d", &horas_extras);

  // Calculando o valor da hora trabalhada
  valor_hora_trabalhada = salario_minimo / 5;

  // Calculando o salário do mês
  salario_mes = horas_trabalhadas * valor_hora_trabalhada;

  // Calculando o acréscimo devido aos dependentes
  acrescimo_dependentes = dependentes * 32.0;

  // Calculando o acréscimo devido às horas extras
  acrescimo_horas_extras = horas_extras * (valor_hora_trabalhada * 1.5);

  // Calculando o salário bruto
  salario_bruto = salario_mes + acrescimo_dependentes + acrescimo_horas_extras;

  // Calculando o IRRF
  if (salario_bruto < 200.0) {
    irrf = 0.0;
  } else if (salario_bruto >= 200.0 && salario_bruto <= 500.0) {
    irrf = salario_bruto * 0.1;
  } else {
    irrf = salario_bruto * 0.2;
  }

  // Calculando o salário líquido
  salario_liquido = salario_bruto - irrf;

  // Calculando a gratificação
  if (salario_liquido <= 350.0) {
    gratificacao = 100.0;
  } else {
    gratificacao = 50.0;
  }

  // Calculando o salário a receber
  salario_a_receber = salario_liquido + gratificacao;

  // Exibindo o resultado
  printf("Salário a receber: R$ %.2f\n", salario_a_receber);

  return 0;
}

