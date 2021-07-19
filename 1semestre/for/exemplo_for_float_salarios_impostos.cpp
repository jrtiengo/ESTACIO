#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int cont;
	float salbruto, salliquido, imposto, totbruto, totliquido, totimposto;
	totbruto = 0;
	totliquido = 0;
	totimposto = 0;
	
		for (cont=1;cont<=2;cont++)
	
		{
		printf("Entre com o salario bruto: ");
		scanf("%f", &salbruto);
		totbruto = totbruto + salbruto;
			
			if (salbruto >= 0.00 and salbruto <= 999.00)
			{
			   imposto = (salbruto * 10) / 100;
			}
			else if (salbruto >= 999.01 and salbruto <= 1999.00)
			{
			   imposto = (salbruto * 15) / 100;
			}
			
		salliquido = salbruto - imposto;
		totliquido = totliquido + salliquido;
		totimposto = totimposto + imposto;
		}
		
	printf("Total Bruto: %.2f \n", totbruto);
	printf("Total Liquido: %.2f \n", totliquido);
	printf("Total Imposto: %.2f \n", totimposto);
	
return 0;
}

