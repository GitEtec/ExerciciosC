#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
15- O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a um programa que receba o pre�o de f�brica de um ve�culo, o percentual de lucro do distribuidor e o percentual de imposto, calcule e mostre:
a) o valor corresponde aos impostos;
b) o valor corresponde aos impostos;
c) o pre�o final do ve�culo.*/

int main(int argc, char *argv[]) {
	float preco_fab,perc_lucro,imposto,preco_final,v_lucro,v_impo,preco_imp;
	printf("Digite o preco de fabrica do veiculo R$");
	scanf("%f",&preco_fab);
	printf("Digite o percentual de lucro do distribuidor %");
	scanf("%f",&perc_lucro);
	printf("Digite o percentual dos impostos %");
	scanf("%f",&imposto);
	v_impo = preco_fab * perc_lucro /100;
	v_lucro = preco_fab * imposto /100;
	preco_final = preco_fab + v_impo + v_lucro;
	printf("Lucro distribuidor %.1f \n",v_lucro);
	printf("Imposto %.1f \n",v_impo);
	printf("Preco Final: R$ %.1f \n",preco_final);
	return 0;
}
