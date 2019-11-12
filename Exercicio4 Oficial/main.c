#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c,sexo,f,m;
	float altura,maior,menor,media,altm,altf,percf,percm,difp;
	f = 0;
	m = 0;
	maior = 0;
	menor = 3000;
	
	for(c = 1 ; c<= 4 ; c++){
		printf("\nDigite os dados dos participantes.");
		printf("\nDigite sua altura: ");
		scanf("%f",&altura);
		
		printf("\n[1] Feminino");
		printf("\n[2] Masculino");
		printf("\nDigite seu sexo de acordo com as numeracoes: ");
		scanf("%d",&sexo);
		
		
		if(sexo == 1 ){
			f = f+1;
			altf += altura;
			media = altf / f;
		}else if(sexo == 2){
			m = m+1;
		}
		
		
		
		if(altura < menor ){
			menor = altura;
			
			
		}else if (altura > maior){
			maior = altura;
		}
		//Diferenca de 
		percf = (100*f)/c;
		percm = (100*m)/c;
		difp = percf - percm;
	}	
	printf("\n--------------------------------");
	printf("\nMenor altura %.1f",menor);
	printf("\nMaior altura %.1f",maior);
	printf("\nMedia Feminina %.2f",media);
	printf("\nQuantidade de Homens: %d",m);
	printf("\nDiferenca Percentual %.1f",difp);
	printf("\n--------------------------------");
	
	
	return 0;
}
