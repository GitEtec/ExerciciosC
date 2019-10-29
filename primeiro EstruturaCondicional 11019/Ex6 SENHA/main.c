#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char senha[5];
	printf("Digite a senha: ");
	scanf("%s",&senha);
	
	if(strcmp("asdfg",senha)==0)
	{
		printf("Senha correta");
	
	}
	else
	{
		printf("Senha incorreta");
	}
	return 0;
}
