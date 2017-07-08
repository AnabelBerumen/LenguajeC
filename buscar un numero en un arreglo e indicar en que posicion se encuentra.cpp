//buscar un numero en un arreglo e indicar en que posicion se encuentra
#include <stdio.h>
#include <conio.h>
#include "stdlib.h"

main (){
	int vec[5]={3,5,7,9,2},i,n, b=0,p;
	system ("clr");
	printf ("teclea el valor a buscar  ");
	scanf ("%i",&n);
	for (i=0; i<5;i++)
		if (vec[i]==n)
			{
				b=1;
				p=1;
			}
	if(b==1)
		printf ("\n El numero %i si se encuentra en la posicion %i",n,p);
	else
		printf ("\n El numero %i no se encuentra",n);
	getch ();
	return 0;
}
