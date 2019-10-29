#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("Digite o primeiro valor: ");
	scanf("%d",&a);
	printf("Digite o segundo valor: ");
	scanf("%d",&b);
	printf("Digite o terceiro valor: ");
	scanf("%d",&c);
	if (a > b)                                // a>b
      if (b > c) 
        printf("%4d%4d%4d\n", a, b, c);       // a>b>c
      else                                    // a>b,c>=b
        if (a > c) 
          printf("%4d%4d%4d\n", a, c, b);     // a>c>=b
        else 
          printf("%4d%4d%4d\n", c, a, b);     // c>=a>b
    else                                      // b>=a
      if (b > c)                              // b>=a,b>c
        if (a > c) 
          printf("%4d%4d%4d\n", b, a, c);     // b>=a>c
        else 
          printf("%4d%4d%4d\n", b, c, a);     // b>c>=a
      else 
        printf("%4d%4d%4d\n", c ,b, a);       // c>=b>=a
	return 0;
}
