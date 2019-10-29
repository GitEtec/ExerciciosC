#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char sx[1] ;
	float altura, pesoh, pesom;
	printf("Digite seu sexo: m ou f: ");
	scanf("%s",&sx);
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	
	if(strcmp("f",sx)==0)
	{
		pesom = (62.1 * altura)-44.7;
		printf("Seu peso ideal e %.1f :",pesom);
	}
	else
	{
		pesoh = (72.7 * altura)-58;	
		printf("Seu peso ideal e %.1f :",pesoh);
	}
	
	return 0;
}
