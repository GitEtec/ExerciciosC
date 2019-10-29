#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d1,m1,a1,d2,m2,a2, nv,data1,data2;
	
	printf("\nData [1]");
	printf("\nDia: ");
	scanf("%d",&d1);
	printf("\nMes: ");
	scanf("%d",&m1);
	printf("\nAno: ");
	scanf("%d",&a1);
	data1 = (a1 * 100 + m1)*100+d1;
	printf("\nData [2]");
	printf("\nDia: ");
	scanf("%d",&d2);
	printf("\nMes: ");
	scanf("%d",&m2);
	printf("\nAno: ");
	scanf("%d",&a2);
	data2 = (a2 * 100 + m2)*100+d2;
	if(data1 < data2){
		printf("%d / %d /  %d -  %d /  %d / %d",d1,m1,a1,d2,m2,a2);
	}else{
		printf("%d / %d /  %d -  %d /  %d / %d",d2,m2,a2,d1,m1,a1);
	}
	return 0;
}
