#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop
Faça um programa que receba o salário base de um funcionário, calcule e mostre o seu salário a receber,
 sabendo-se que o funcionário tem gratificação de R$ 500,00 e paga imposto de 11% sobre o salário base. */

int main(int argc, char *argv[]) {
	float salario, sal_receber;
	printf("Digite o salario do funcionario: R$");
	scanf("%f",&salario);
	
	sal_receber = (salario+500)-(salario * 0.11);
	
	printf("\n O salario a receber e R$ %.1f",sal_receber);
	system("PAUSE");
	return 0;
}
