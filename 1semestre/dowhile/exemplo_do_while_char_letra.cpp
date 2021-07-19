#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
char letra;

	do
	{
switch (letra)
printf ("Digite um número: ");
scanf("%d",&num);

if (num!=0 && num!=9)
		{
			if (num%2 ==0)
			printf ("Sucessor = %d\n\n ",num+1);
			else
			printf ("Antecessor = %d\n\n ",num-1);
				
		}
		
	}
while (num!=0 && num!=9);
return 0;
}

