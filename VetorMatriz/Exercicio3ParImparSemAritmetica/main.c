#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c,i,y,vetora[10],vetorb[10
	],quantidadepa=0,quantidadeia=0,quantidadeib=0,quantidadepb=0;
	
	
	for(c = 0; c < 10 ; c++){
		printf("\nEntre com um numero para o vetor a ");
		scanf("%d",&vetora[c]);
		if(vetora[c] % 2 == 0 ){
			quantidadepa += 1;	
		}else{
			quantidadeia += 1;
		}
		
	}
	for(i = 0; i < 10; i++){
		printf("\nEntre com um numero para o vetor b ");
		scanf("%d",&vetorb[i]);
		if(vetorb[i] % 2 == 0 ){
			quantidadepb += 1;	
		}else{
			quantidadeib += 1;
		}
		
	}
/*	for(y = 0 , y < 3; y ++){
		printf("Quantidade pares %d",quantidadep);
		printf("Quantidade impares %d",quantidadei);
		
	}*/
	printf("\nQuantidade pares VETOR A ");
	printf("\nQuantidade pares %d",quantidadepa);
	printf("\nQuantidade impares %d",quantidadeia);
	printf("\n-----------------------------------");
	printf("\nQuantidade pares VETOR B ");
	printf("\nQuantidade pares %d",quantidadepb);
	printf("\nQuantidade impares %d",quantidadeib);
	return 0;
}
