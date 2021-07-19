#include <stdio.h>
#include <stdlib.h>

main()

{

int num, num_maior, cont;
num_maior = 0;

printf ("Digite um numero: ");
scanf ("%d", &num);

for (cont=1;cont<=20;cont=cont+1)
{
	if (num > num_maior) {
	num_maior = num;
	} 
	
}
printf ("\n Numero = %d", num_maior);

return 0;
}
	
