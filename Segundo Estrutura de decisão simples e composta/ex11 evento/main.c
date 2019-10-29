#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float horas, min, seg;
 
    printf("Digite a duracao do evento em segundos:");
    scanf("%f",&seg);
    horas = seg / 3600;
	min = (seg-(horas*3600))/ 60;
	seg = (seg-(horas*3600)-(min*60));
    printf("Horas %.2f ",horas);
    printf("minutos %.1f ",min);
    printf("Segundos %.1f ",seg);

	return 0;
}
