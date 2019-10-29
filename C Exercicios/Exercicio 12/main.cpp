#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 

12- Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.*/

int main(int argc, char** argv) {
	float n1, n2, elevado1, elevado2;
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	elevado1 = pow(n1,n2);
	elevado2 = pow(n2,n1);
	printf("O numero %.1f  elevado ao %.1f e :  %.1f\n",n1,n2,elevado1);
	printf("\nO numero %.1f elevado ao %.1f e: %.1f",n2,n1,elevado2);
	system("PAUSE");
	return 0;
}
