#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float peso,altura,imc;
	printf("\nDigite seu Peso kg ");
	scanf("%f",&peso);
	printf("\nDigite sua Altura m ");
	scanf("%f",&altura);
	
	imc = peso/(pow(altura,2));
	
	if(imc < 18){
		printf("Magreza");
	}else if(imc >= 18.0 && imc <= 24.9 ){
		printf("Saudavel");
	}else if(imc >= 25.0 && imc <= 29.9 ){
		printf("Sobrepeso");
	}else if(imc >= 30.0 ){
		printf("Obsidade");
	}
	return 0;
}
