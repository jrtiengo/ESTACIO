#include <stdio.h>
#include <stdlib.h>

int main()
{
	
float salario, maior, soma, media;
int cont;

maior = 0;
soma = 0;

for (cont=1;cont<=2;cont++)
{
	printf("Digite o salario: ");
	scanf (" %f",&salario);
	soma = soma + salario;
	
	if (salario > maior)
{
	maior = salario;
}
	
}

media = soma / 2;

printf ("O maior salario: %.2f\n",maior);
printf("Media salarial e: %.2f\n",media);

return 0; 

}
