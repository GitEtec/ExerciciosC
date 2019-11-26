#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//10 x 12
	int matriz[10][12],i,j,soma;
	//Contador
	for(i = 0; i < 10;++i ){
		for(j = 0; j < 12
		; ++j){
			//Digitar numeros para inserir na Matriz
			printf("Entre com valores: [%d][%d] = ", i+1,j+1);
			//insere
			scanf("%i",&matriz[i][j]);
			//Soma da matriz	
			soma = soma + matriz[i][j];
		}
		printf("\n"); 
	}
	//Mostra a soma total dos valores das [LINHAS]
	printf("Soma total: %d",soma);
	
	return 0;
}
