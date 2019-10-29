#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,delta,x2,x1;
	printf("Digite o valor para a ");
	scanf("%f",&a);
	printf("Digite o valor para b ");
	scanf("%f",&b);
	printf("Digite o valor para c ");
	scanf("%f",&c);
	delta = (pow(b,2)-4*a*c);
	if(delta < 0)
	{
		printf("\n Nao tem solucao real");
		printf("\n Delta %.1f",delta);
	}
	else if(delta == 0)
	{
		x1 =(- b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("\n Delta %.1f",delta);
		printf("\n XI %.1f",x1);
		printf("\n XII %.1f",x2);
		
		
	}
	else
	{
		x1 =(- b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("\n Delta %.1f",delta);
		printf("\n XI %.1f",x1);
		printf("\n XII %.1f",x2);
		
	}
	
	return 0;
}
