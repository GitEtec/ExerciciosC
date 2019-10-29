#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int idade_anos, idade_meses, idade_dias, total_dias;



printf("Digite a quantidade de dias:");
scanf("%d",&total_dias);


idade_anos = total_dias/365;

total_dias = total_dias%365;

idade_meses = total_dias/30;

total_dias = total_dias%30;

idade_dias = total_dias;

printf("A idade e %d \n",idade_anos);
printf("A quantidade de meses e %d \n", idade_meses);
printf("A quantidade de dias e  %d \n", idade_dias );
	return 0;
}
