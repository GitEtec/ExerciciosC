#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,c,mult,soma,vetora[10],vetorb[10];
	
	
for(c = 0; c < 10; c++){	

	printf("Digite um numero: ");
	scanf("%d",&vetora[c]);
		if(vetora[c] % 2 == 0 ){
			vetorb[c] *= 5;
		}else{
			vetorb[c] += 5;
			
		}	
		
}
for(i = 0; i < 10; i ++){
		printf("\nVETOR A %d",vetora[i]);
		printf("\nVETOR B %d",vetorb[i]);
}
		
	
	

	return 0;
}
