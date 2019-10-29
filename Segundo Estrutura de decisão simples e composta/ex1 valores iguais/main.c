#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char sx[1];
	printf("Digite o seu sexo: ");
	scanf("%s",&sx);
	
	if(strcmp("f",sx)==0){
		printf("Seja bem-vinda Senhora");
	}else if(strcmp("m",sx)==0){
		printf("Seja bem-vindo Senhor");
	}else{
		printf("Sexo invalido");
	}
	system("pause");
	return 0;
	
}
