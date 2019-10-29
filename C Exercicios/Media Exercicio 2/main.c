#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.*/

int main(int argc, char *argv[]) {
	float nota1, nota2, nota3, nota4, media_aritmetica;
	printf("Digite a 1º nota: ");
	scanf("%f",&nota1);
	printf("Digite a 2º nota: ");
	scanf("%f",&nota2);
	printf("Digite a 3º nota: ");
	scanf("%f",&nota3);
	
	media_aritmetica = (nota1+nota2+nota3)/3;
	printf("\n A media aritmetica eh: %f \n",media_aritmetica);
	system("PAUSE");
	return 0;
}
