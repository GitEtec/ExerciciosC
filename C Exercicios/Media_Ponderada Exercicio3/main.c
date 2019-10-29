#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessa notas.*/

int main(int argc, char *argv[]) {
	
	float n1,n2,n3,p1,p2,p3;
	float media_ponderada,soma_pesos;
	printf(" Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite o peso da primeira nota: ");
	scanf("%f",&p1);
	printf("Digite a segunda nota:  ");
	scanf("%f",&n2);
	printf("Digite  o peso da segunda nota:  ");
	scanf("%f",&p2);
	printf("Digite a terceira nota:  ");
	scanf("%f",&n3);
	printf(" Digite o peso da terceira nota: ");
	scanf("%f",&p3);
	soma_pesos = p1+p2+p3;
	media_ponderada = ((n1*p1)+(n2*p2)+(n3*p3))/soma_pesos;
	printf("\n A media ponderada do aluno e: %.1f ",media_ponderada);
	system("PAUSE");
	return 0;
}
