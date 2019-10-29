#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop
Faça um programa que calcule e mostre a área de um circulo. Sabe-se que Área = PI *r². */

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
