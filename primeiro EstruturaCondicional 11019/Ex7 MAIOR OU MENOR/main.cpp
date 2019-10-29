#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	if(idade <= 18)
	{
		printf("Menor");
	}
	else
	{
		printf("Maior");
	}
	return 0;
}
