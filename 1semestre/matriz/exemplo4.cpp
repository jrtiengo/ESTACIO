#include <stdio.h>

// video 3 do modulo 2

int main()

{

int num,ind,soma=0;

for (ind=1;ind<=5;ind++)
{ scanf ("%d",&num);
   if (num%2 == 0)
       soma=soma+num;
 }  
 printf("%d",soma);

    
    
}
