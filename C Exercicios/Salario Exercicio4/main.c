#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Fa�a um programa que receba o sal�rio de um funcion�rio, 
calcule e mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.*/

int main(int argc, char *argv[]) {
	
	float sal,novo_salario;
	printf("Digite o salario atual. ");
	scanf("%f",&sal);
	novo_salario = sal+(sal * 1/4);
	printf("\n O novo salario do funcionario sera:R$ %.1f " ,novo_salario);
	return 0;
}
