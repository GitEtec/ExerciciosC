#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Com base no algoritmo anterior, elabore um novo que permita ao usuário escolher a tabuada desejada.
*/
int main(int argc, char *argv[]) {
	int c , resp,num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	for (c = 1; c <= 10;c++){
		resp = c * num;
		printf("\n%d X %d = %d",num,c,resp);
	}
	return 0;
}
