#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Faça um programa que receba o salário de um funcionário e percentual
 de aumento, calcule e e mostre o valor do aumento e novo salário.*/

int main(int argc, char *argv[]) {
	float salario, percentual, novo_salario,salario_per;
	printf("Digite o salario atual do funcionario: R$");
	scanf("%f",&salario);
	printf("Digite o salario o percentual: %");
	scanf("%f",&percentual);
	salario_per = salario * (percentual/100);
	novo_salario = salario_per + salario;
	printf("\n Percentual de aumento: R$ %.1f",salario_per);
	printf("\n Novo salario: R$ %.1f",novo_salario);
	system("PAUSE");
	return 0;
}
