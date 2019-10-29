#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1,n2,n3,n4,soma;
	
	printf("Escreva o 1 numeros: ");
	scanf("%d",&n1);
	printf("Escreva o 2 numeros: ");
	scanf("%d",&n2);
	printf("Escreva o 3 numeros: ");
	scanf("%d",&n3);
	printf("Escreva o 4 numeros: ");
	scanf("%d",&n4);
	soma = n1+n2+n3+n4;
	
	printf("A soma dos numeros digitados e:%d ",soma);
	
	return 0;
}
