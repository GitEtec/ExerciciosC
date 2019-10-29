#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1,n2,n3,media_pond,div;
	printf("Digite a primeira nota ");
	scanf("%f",&n1);
	printf("Digite a segunda nota ");
	scanf("%f",&n2);
	printf("Digite a terceira nota ");
	scanf("%f",&n3);
	div = 2+3+5;
	media_pond = ((n1 * 2 + n2 * 3 + n3 * 5)/div);
	printf("A media ponderada do aluno e %.1f",media_pond);
	return 0;
}
