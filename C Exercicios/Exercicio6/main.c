#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que receba o sal�rio base de funcion�rio,
 calcule e mostre o sal�rio a receber, sabendo-se que o funcion�rio tem gratifica��o de 10% 
 sobre o sal�rio base e paga o imposto de 15% sobre este sal�rio.*/

int main(int argc, char *argv[])
{
  float salario_base, novo_salario;
  printf("Digite o salario base do funcionario(a): ");
  scanf("%f",&salario_base);
  novo_salario = (salario_base+(salario_base*0.10)-(salario_base *0.15);
  printf("O novo salario do funcionario sera R$: %f",&novo_salario);
  	
  return 0;
}
