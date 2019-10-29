#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Faça um programa que receba o salário de um funcionário, 
calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.*/

int main(int argc, char *argv[]) {
	
	float sal,novo_salario;
	printf("Digite o salario atual. ");
	scanf("%f",&sal);
	novo_salario = sal+(sal * 1/4);
	printf("\n O novo salario do funcionario sera:R$ %.1f " ,novo_salario);
	return 0;
}
