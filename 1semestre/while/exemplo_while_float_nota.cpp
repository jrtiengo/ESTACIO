#include <stdio.h>
#include <stdlib.h>

int main()
{
float nota1,nota2,nota3,media;
int contalunos;
contalunos=1;

	while (contalunos<=2)
{
printf("Entre com a nota 1 do aluno: ");
scanf(" %f", &nota1);
printf("Entre com a nota 2 do aluno: ");
scanf(" %f", &nota2);
printf("Entre com a nota 3 do aluno: ");
scanf(" %f", &nota3);
media=(nota1+nota2+nota3)/3;

if (media>=7)
{
printf("Aluno APROVADO com media : %.2f \n\n",media);
}
else
{
printf("Aluno REPROVADO com media : %.2f\n\n",media);
}
contalunos++;
}
return 0;
}
