#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num1,num2, soma;
	printf("Digite o primeiro numero ");
	scanf("%f",&num1);
	printf("Digite o segundo numero ");
	scanf("%f",&num2);
	soma = num1 + num2;
	if(soma >= 25)
	{
		printf("\n Soma e igual a: %.1f ",soma);
	} 
	else
	{
		system("pause");	
	}
	return 0;
}
