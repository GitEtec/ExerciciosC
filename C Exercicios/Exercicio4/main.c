#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 

Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário,
 sabendo-se que este sofreu um aumento de 25%.*/

int main(int argc, char *argv[]) {
	float salario, novo_salario;
	printf("Digite o salario: ");
	scanf("%f",&salario);
	novo_salario = (salario*1/4)+salario;
	printf("O salario total é: %.1f",novo_salario);
	return 0;
}
