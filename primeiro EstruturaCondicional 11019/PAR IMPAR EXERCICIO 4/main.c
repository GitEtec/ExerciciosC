#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n Numero digitado %d",num);
		printf("\n Par");
	}else
	{
		printf("\nNumero digitado %d",num);
		printf("\n Impar");
	}
	return 0;
}
