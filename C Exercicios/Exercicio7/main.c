#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop
Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o seu sal�rio a receber,
 sabendo-se que o funcion�rio tem gratifica��o de R$ 500,00 e paga imposto de 11% sobre o sal�rio base. */

int main(int argc, char *argv[]) {
	float salario, sal_receber;
	printf("Digite o salario do funcionario: R$");
	scanf("%f",&salario);
	
	sal_receber = (salario+500)-(salario * 0.11);
	
	printf("\n O salario a receber e R$ %.1f",sal_receber);
	system("PAUSE");
	return 0;
}
