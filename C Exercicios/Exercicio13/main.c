#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
13- Fa�a um programa que receba uma medida em p�s, fa�a as convers�es a seguir e mostre os resultados.
a) podegadas;
b) jardas;
c) milhas.
Sabe-se que: 1 p� = 12 polegadas; 1 jarda = 3 p�s e 1 milha = 1.760 jardas.*/

int main(int argc, char *argv[]) {
	float pes, polegadas, jardas, milhas;
	printf("Digite uma medida em pes: ");
	scanf("%f",&pes);
	polegadas = pes * 12;
	jardas =pes/3;
	milhas= pes / 5280;
	printf("%.1f pes em polegadas e %.1f: \n",pes,polegadas);
	printf("%.1f pes em jardas e %.1f: \n",pes,jardas);
	printf("%.1f pes em milhas e %.1f: \n",pes,milhas);
	
	return 0;
}
