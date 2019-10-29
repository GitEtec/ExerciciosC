#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o salário base de funcionário,
 calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 10% 
 sobre o salário base e paga o imposto de 15% sobre este salário.*/

int main(int argc, char *argv[])
{
  float salario_base, novo_salario;
  printf("Digite o salario base do funcionario(a): ");
  scanf("%f",&salario_base);
  novo_salario = (salario_base+(salario_base*0.10)-(salario_base *0.15);
  printf("O novo salario do funcionario sera R$: %f",&novo_salario);
  	
  return 0;
}
