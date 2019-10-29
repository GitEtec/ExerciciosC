#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.*/

int main(int argc, char *argv[]) {
	float area, base, altura;
	printf("Digite a base do triangulo: ");
	scanf("%f",&base);
	printf("Digite a altura: ");
	scanf("%f",&altura);
	area = (base*altura)/2;
	printf("A area do triangulo e: %.2f",area);
	
	return 0;
}
