#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int c,i, vetor[10];

for(i = 0;i < 10; i++) {
	printf("Digite um numero: ");
	scanf("%d",&vetor[i]);	
}
for(c = 0; c < 10; c++){
		printf("%d ",vetor[c]);		
}




	return 0;
}
