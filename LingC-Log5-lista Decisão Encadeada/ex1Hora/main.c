#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float turno;
	printf("Digite seu turno: ");
	scanf("%f",&turno);
	
	if(turno >= 5.00 && turno <= 12.59){
		printf("Turno manha");
	}else if(turno >= 13.00 && turno <= 18.59){
		printf("Turno tarde");
	}else if(turno >= 19.00 && turno <= 4.59){
		printf("Turno noite");
	}
	return 0;
}
