#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop
Faça um programa que receba o valor de um depósito e o valor da taxa de juros,
 calcule e mostre o valor do rendimento e valor total depois do rendimento. */

int main(int argc, char *argv[]) {
	float deposito, taxa, rendimento, valor_total;
	printf("Digite o valor do deposito R$ ");
	scanf("%f",&deposito);
	printf("Digite a taxa de juros % ");
	scanf("%f",&taxa);
	rendimento = deposito*(taxa/100);
	valor_total = rendimento + deposito;
	printf("\n O rendimentoé de R$ %.1f",rendimento);
	printf("\n O deposito total sera de R$ %.1f",valor_total);
	system("PAUSE");
	
	return 0;
}
