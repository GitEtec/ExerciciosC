#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float media,n1,n2,n3,n4;
	printf("\n Digite a primeira nota ");
	scanf("%f",&n1);
	printf("\n Digite a segunda nota ");
	scanf("%f",&n2);
	printf("\n Digite a terceira nota ");
	scanf("%f",&n3);
	printf("\n Digite a quarta nota ");
	scanf("%f",&n4);
	media = (n1+n2+n3+n4)/4;
	if(media >9){
		printf("Sua media e %.0f ",media);
		printf("Aprovado");	
	}else if(media >= 5 && media <= 6.9){
		printf("Sua media e %.0f ",media);
		printf("Aprovado");
	}else if(media >= 7 && media <= 8.9){
		printf("Sua media e %.0f ",media);
		printf("Aprovado");
	}else if(media >2.5 && media <= 4.9){
		printf("Sua media e %.0f ",media);
		printf("Reprovado");
	}else if( media < 2.5){
		printf("Sua media e %.0f ",media);
		printf("Reprovado");
	}
	return 0;
}
