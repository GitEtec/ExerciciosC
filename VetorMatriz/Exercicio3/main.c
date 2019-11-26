#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int matriz[5][5],i,j,x,y,soma;
	for(i = 0; i < 5; i ++){
		
		for(j = 0; j <5;j++){	
		printf("Entre com valores : [%i] [%i]",i+1,j+1);
		scanf("%i",&matriz[i][j]);
		soma = soma + matriz[i][j];

			
		}
		printf("\n");
	}	
	//Mostra valores
	for(x = 0; x < 5; x ++){
		for(y = 0; y <5; y++){
			printf("%i",matriz[x][y]);
			
		}
		printf("\n");
	}	
	printf("Soma total: %d",soma);
	return 0;
}

