// promedio de 3 edades
#include <stdio.h>
#include <conio.h>

main(){
	int e1,e2,e3;
	float prom;
	printf ("ingrese la edad de la primer persona");
	scanf ("%d",&e1);
	printf ("ingrese la edad de la segunda persona");
	scanf ("%d",&e2);
	printf ("ingrese la edad de la tercer persona");
	scanf ("%d",&e3);
	prom=(e1+e2+e3)/3;
	printf ("el promedio de las 3 edades es %f",prom);
}
