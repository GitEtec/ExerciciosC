#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int op;
	float a, b , resp;
	printf("Escolha uma opcao");
	printf("\n[1] soma ");
	printf("\n[2] subtracao");
	printf("\n[3] multiplicacao ");
	printf("\n[4] divisao ");
	printf("\n Qual e a sua opcao: ");
	scanf(" %d",&op);
	printf("\n---------------------");
	printf("\nDigite um numero ");
	scanf("%f",&a);
	printf("\nDigite outro numero ");
	scanf("%f",&b);
	
	switch(op){
		case 1:
			resp = a + b;
			break;
		case 2:
			resp = a - b;
			break;
		case 3:
			resp = a * b;
			break;
		case 4:
			resp = a / b;
			break;
		
	}
	printf("O calculo e %.0f",resp);
	return 0;
}
