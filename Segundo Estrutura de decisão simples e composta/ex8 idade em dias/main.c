#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float d,m,a,dias;
	printf("dia de nascimento: ");
	scanf("%f",&d);
	printf("mes de nascimento: ");
	scanf("%f",&m);
	printf("ano de nascimento: ");
	scanf("%f",&a);
	dias = ((2019 -a ) * 365 + (m * 30) +d );
	
	printf("Anos em dias %.1f ",dias);
	
	system("pause");
	return 0;
}
