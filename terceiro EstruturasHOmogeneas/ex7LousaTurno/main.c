#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float horario;
	printf("Digite o horario: ");
	scanf("%f",&horario);
	
	if(horario >= 5.00 && horario <= 12.59){
		printf("Turno manha");
	}else if(horario >= 13 && horario <= 18.59){
		printf("Turno tarde");
	}else if(horario >= 19 && horario <= 4.59){
		printf("Turno noite");
	}
	return 0;
}
