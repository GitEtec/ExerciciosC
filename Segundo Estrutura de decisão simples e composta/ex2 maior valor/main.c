#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	printf("Digite um numero: ");
	scanf("%d",&x);
	printf("Digite outro numero: ");
	scanf("%d",&y);
	if(x > y){
		printf(" %d e maior que %d.",x,y);
	}else{
		printf(" %d e maior que %d.",y,x);
	}
	system("pause");
	return 0;
}
