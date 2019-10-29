#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("Digite um numero");
	scanf("%d",&x);
	if(x % 5 == 0 ){
		printf("O numero %d e multiplo de 5. ",x);
	}else{
		printf("O numero %d nao e multiplo de 5. ",x);
	}
	system("pause");
	return 0;
}
