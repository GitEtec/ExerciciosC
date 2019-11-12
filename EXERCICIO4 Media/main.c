#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float c, altura,  altura_mulheres, dif_perc,altura_menor, altura_maior;
	int homens,mulheres;
	char sexo[1];
	c = 1;
	while(c <= 3) {
		
		printf("\n Qual e seu sexo : [ f / m ]: ");
		scanf("%c",&sexo);
		printf("\n Entre com a sua altura: ");
		scanf("%f",&altura);
		
		
		if(altura < altura_menor ){
			
			altura_menor = altura;
			
		}else if(altura > altura_maior){
			
			altura_maior = altura;
			
		}
		
		if(sexo == "f"){
			mulheres += 1 ;
			
		}else if(sexo == "m"){
			
			homens += 1;
			
		}
		
		
		
		c = c+1;
		
		printf("\nMulheres : %d",mulheres);
		printf("\nHomens : %d",homens);
		printf("\nAltura maior  : %.2f",altura_maior);
		printf("\nAltura menor  : %.2f",altura_menor);
		return 0;
	}
		
}
