#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float saldo,saque, tot,depo,empre;
	int op;
	saldo = 10.0000,00;
	printf("\nSaldo atual: %f",saldo);
	printf("\nOpcoes no caixa eletronico");
	printf("\n[1] Saque ");
	printf("\n[2] Deposito ");
	printf("\n[3] Emprestimo ");
	printf("\nDigite uma opcao: ");
	scanf("%d",&op);
	
	if(op == 1){
		printf("Quando deseja sacar: ");
		scanf("%f",&saque);
		tot = saldo -= saque;
	}else if(op == 2 ){
		printf("Quando deseja depositar: ");
		scanf("%f",&depo);
		tot = saldo += depo;
	}else if(op == 3 ){
		printf("Quando deseja emprestar: ");
		scanf("%f",&empre);
		tot = saldo -= empre;
	}
	
	printf("\nO saldo atual: %f",tot);
	return 0;
}
