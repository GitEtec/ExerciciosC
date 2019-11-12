#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c , potencia;
	for(c = 0; c <= 15; c++){
		potencia = pow(3,c);
		printf("\n  %d",potencia);
	}
	return 0;
}
