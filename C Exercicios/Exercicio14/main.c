#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop
14- Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade da pessoa;
b)quantos ela terá em 2050. */

int main(int argc, char *argv[]) {
	int ano_nasc, ano_atual, ano_futuro;
	printf("Digite o ano de nascimento: ");
	scanf("%d",&ano_nasc);
	ano_atual = 2019 - ano_nasc;
	ano_futuro = 2050-ano_nasc;
	printf("A sua idade atual e : %d \n",ano_atual);
	printf("A sua idade em 2050 e: %d \n",ano_futuro);
	return 0;
}
