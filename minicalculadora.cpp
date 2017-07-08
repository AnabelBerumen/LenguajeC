//minicalculadora
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main (){
	float a,b;
	system ("clr");
	printf ("\n ingrese un numero");
	scanf ("%f",&a);
	printf ("\n ingrese otro numero");
	scanf ("%f",&b);
	printf ("\nLos resultados son: %.2f %.2f %.2f %2.f",a+b,a-b,a*b,a/b);
	getch();
	return 0;
}
