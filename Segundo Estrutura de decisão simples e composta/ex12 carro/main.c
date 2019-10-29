#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float preco_fab,dist,imp,cons,preco_final;
	
	dist =29;
	imp =47;
	
	printf("Digite o preco de fabrica do veiculo ");
	scanf("%f",&preco_fab);

	dist = preco_fab +(preco_fab * dist / 100);
 
	imp = preco_fab + (preco_fab * imp / 100);
 
	cons = preco_fab + dist + imp;
	
	
	
	printf("Preco Final %f",cons);
	return 0;
}
