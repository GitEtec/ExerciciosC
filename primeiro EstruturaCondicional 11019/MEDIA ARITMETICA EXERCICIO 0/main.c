#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1,n2,n3,n4,media;
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	printf("Digite a terceira nota: ");
	scanf("%f",&n3);
	printf("Digite a quarta nota: ");
	scanf("%f",&n4);
	media = (n1+n2+n3+n4)/4;
	if(media >= 7)
	{
		printf("\n O aluno foi aprovado");
		printf("\n Media do aluno e %.1f ",media);
	}else if(media <= 6)
	{
		printf("\n Conselho");
		printf("\n Media do aluno e %.1f ",media);
	}
	else
	{
		printf("\n Reprovado");
		printf("\n Media do aluno e %.1f ",media);
	}
	system("pause");
	return 0;
}
