#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado*/

int main(int argc, char *argv[]) {
	float num, quadrado, cubo, raiz_q, raiz_c;
	printf("Digite um numero ");
	scanf("%f",&num);
	quadrado = pow(num,2);
	cubo = pow(num,3);
	raiz_q = sqrt(num);
	raiz_c = cbrt(num);
	printf("\nAo quadrado %f",quadrado);
	printf("\nAo cubo %f",cubo);
	printf("\nRaiz quadrada %f",raiz_q);
	printf("\nraiz cubica %.2f",raiz_c);
	return 0;
}
