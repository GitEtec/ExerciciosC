#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Fa�a um programa que receba um n�mero positivo e maior que zero, calcule e mostre:
a) o n�mero digitado ao quadrado;
b) o n�mero digitado ao cubo;
c) a raiz quadrada do n�mero digitado;
d) a raiz c�bica do n�mero digitado*/

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
