#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int op;
	printf("[1] BigMac ");
	printf("\n[2] Quarteirao");
	printf("\n[3] McChicken");
	printf("\n[4] Cheddar MacMelt");
	printf("\n[5] MacMax");
	printf("\nFaca seu pedido: ");
	scanf("%d",&op);
	printf("\n----------------------");
	switch(op){
		case 1:
			printf("\n[1] BigMac ");
			break;
		case 2:
			printf("\n[2] Quarteirao");
			break;
		case 3:
			printf("\n[3] McChicken");
			break;
		case 4:
			printf("\n[4] Cheddar MacMelt");
			break;
		case 5:
			printf("\n[5] MacMax");
			break;
		default:
			printf("\nNao existe essa opcao");
			break;
	
			
	}
	
	return 0;
}
