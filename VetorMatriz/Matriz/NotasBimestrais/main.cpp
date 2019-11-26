#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
	  Char nomes["Maria","Lucio","Renato","João","Pedro"];
      float notasAlunos  [4][4] = {0};
      float mediaAlunos [4] = {0};
      float media = 0;

   printf("Insira as 4 notas do 1° Aluno\n");
    for (int alunos = 0; alunos < 4; ++alunos){
        for (int notas = 0; notas < 4; ++notas){
            scanf("%f", &notasAlunos [alunos] [notas]);
             media += notasAlunos [alunos] [notas];

        }
        mediaAlunos [alunos] = media / 4;
        media=0;
        printf("Insira as 4 notas do aluno %i:\n", alunos + 2);
    }

            for (int alunos = 0; alunos < 4; ++alunos){
                printf(" A média do Aluno %c é %2.f\n", nomes[alunos], mediaAlunos [alunos]);
            }










    return 0;
}
