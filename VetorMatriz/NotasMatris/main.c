#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
	  char nomes[4][300];
      float notasAlunos  [4][4] = {0};
      float mediaAlunos [4] = {0};
      float media = 0;

	 for (i = 0; i < 4; ++i){
	 	printf("Nome");
	 	scanf("%s",&nomes[i]);
	    for (j = 0; j < 4; ++j){	
	    //Recebe Nota aluno	
			printf("Insira as 4 notas do Aluno(a) %s \n",nomes[i]);
	        scanf("%f", &notasAlunos [i] [j]);
	        //Soma as notas / guarda na media
	        media += notasAlunos [i] [j];
	    }
	    
	    //Media calcula a media
	    mediaAlunos[i] = media / 4;
	    media=0;
	    
	}
	//Mostra na tela
	for (i = 0; i < 4; ++i){
	    printf("A média do Aluno(a) %s  é  %1.f\n", nomes[i], mediaAlunos [i]);
	}


    return 0;
}
