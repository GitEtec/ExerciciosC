#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	int numero1,numero2,numero3;
         printf("Digite o primeiro numero inteiro: ");
         scanf("%d", &a);
         printf("Digite o segundo numero inteiro: ");
         scanf("%d",&b);
         printf("Digite o terceiro numero inteiro: ");
         scanf ("%d", &c);
		if (a > b && b > c){
			printf("A ordem dos numero e: %d %d %d",c,b,a);

		}
			
		if (a> c && c > b){
			printf("A ordem dos numero e: %d %d %d",c,a,b);
		}
			
		if (b > a && a > c){
			printf("A ordem dos numeros e: %d %d %d", c,b,a);
		}
			
		if (b > c && c > a){
			printf("A ordem dos numero e: %d %d %d", a,c,b);
		}
			
		if (c > a && a > b){
			printf("A ordem dos numeros e: %d %d %d",b,a,c);

		}
		if (c > b && b > a){
			printf("A lista de numeros crescente e :%d %d %d ",a,b,c);

		}
    
	return 0;
}
