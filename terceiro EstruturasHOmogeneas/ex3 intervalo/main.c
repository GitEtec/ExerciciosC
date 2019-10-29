#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade;
	printf("Digite uma idade: ");
	scanf("%d",&idade);
	
	if(idade >= 10 && idade <= 18){
		printf("A idade esta no intervado de 10 a 18");
	}
	return 0;
}
