// programa para promediar 4 numeros
#include <stdio.h>
#include <conio.h>

main (){
	float a,b,c,d,tot;
	printf("escriba el primer numero \n\n\a");
	scanf ("%f",&a);
	printf ("escriba el segundo numero \n\n\a");
	scanf ("%f",&b);
	printf ("escriba el tercer numero \n\n\a");
	scanf ("%f",&c);
	printf ("escriba el cuarto numero \n\n\a");
	scanf ("%f",&d);
	tot= (a+b+c+d)/4;
	printf("el promedio es %.2f",tot);
	getch();
	return 0;
		
	
}
