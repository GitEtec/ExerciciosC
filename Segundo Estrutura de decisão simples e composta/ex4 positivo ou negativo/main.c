#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("Digite um numero: ");
	scanf("%d",&x);
	
	if(x < 0){
		printf("O numero %d e negativo.",x);
	}else{
		printf("O numero %d e positivo.",x);
	}
	system("pause");
	return 0;
}
