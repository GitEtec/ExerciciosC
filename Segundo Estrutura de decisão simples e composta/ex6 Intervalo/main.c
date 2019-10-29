#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y ,z ;
	printf("Digite um numero: ");
	scanf("%d",&x);
	printf("Digite outro numero: ");
	scanf("%d",&y);
	printf("Digite outro numero: ");
	scanf("%d",&z);
	
	int maior, menor;
	
	if(x > y){
		maior = x;
		menor = y;
	}else{
		maior = y;
		menor = x;
	}
	
	
	if(z >= menor && z <= y ){
		printf("%d %d %d",x,y,z);
	}else{
		printf("%d %d %d",x,y,z);
	}
	system("pause");
	return 0;
}
