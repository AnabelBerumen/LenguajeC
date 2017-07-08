// area de un trapecio
#include <stdio.h>
#include "conio.h"
#include "stdlib.h"
main(){
	
	float b,B,h,r;
	system("cls");
	printf ("ingrese la medida de la base menor");
	scanf ("%f",&b);
	printf ("ingrese la medida de la base mayor");
	scanf ("%f",&B);
	printf ("ingrese la altura");
	scanf ("%f",&h);
	r=(b+B)*h/2;
	printf ("el resultado es %.2f",r);
	getch();
	return 0;
}
