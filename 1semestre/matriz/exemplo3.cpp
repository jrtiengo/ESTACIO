#include <stdio.h>

// Video 3 do modulo 2 (solucao 2)

int main()

{

int mat1[3][3],lin, col,maior=0,contigual=0;

printf("\n Digite valor para os elementos da matriz \n\n ");

for ( lin=0; lin<3; lin++ )

for ( col=0; col<3; col++ )

{

printf ("Elemento[%d][%d] = ",lin,col);

scanf ("%d", &mat1[lin][col]);

if (mat1[lin][col]>maior)

maior=mat1[lin][col];

}

for (lin=0; lin<3; lin++ )

for (col=0; col<3; col++ )

{

if (mat1[lin][col]==maior)

contigual++;

}

printf("\n Maior: %d ",maior);

printf("\n = maior: %d ",contigual);

}
