#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop
Fa�a um programa que calcule e mostre a �rea de um circulo. Sabe-se que �rea = PI *r�. */

int main(int argc, char *argv[]) {
	float area,pi,r;
	pi = 3.14;
	printf("Digite o raio do circulo: ");
	scanf("%f",&r);
	area = pi*pow(r,2);
	printf("A area do circulo e %1.f ",area);
	system("PAUSE");
	return 0;
}
