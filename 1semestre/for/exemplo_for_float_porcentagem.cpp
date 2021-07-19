#include <stdio.h>
#include <stdlib.h>

int main()
{
	
float reajuste, sal_atual, sal_reajust, sal_maior;
int cont;

sal_maior = 0;

printf("Entre com a porcentagem de reajuste: ");
scanf(" %f", &reajuste);

	for (cont=1;cont<=5;cont++)
{

printf("Entre com o salario: ");
scanf(" %f", &sal_atual);
sal_reajust= (sal_atual * reajuste / 100) + sal_atual;
printf("O salario reajustado e: %.2f \n\n", sal_reajust);

	if (sal_reajust > sal_maior)

sal_maior = sal_reajust;

}
printf("Maior Salario Ajustado: %.2f \n", sal_maior);

	return 0;
}



