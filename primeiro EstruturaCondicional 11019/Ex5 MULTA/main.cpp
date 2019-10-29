#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float multa,quilos;
	printf("Digite o quilos de peixe ");
	scanf("%f",&quilos);
	if(quilos > 50)
	{
		multa = quilos* 4;
		printf("Multa pelo quilo excedente e: %.1f ",multa);
	}
	else
	{
		system("pause");
	}
	return 0;
}
