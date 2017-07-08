// venta de pasteles
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define G 150.00
#define M 100.00
#define CH 50.00
#define P 2.20

main(){
	int g,m,ch,p;
	float tot;
	system ("clr");
	printf ("¿cuantos pasteles grandes se vendierón? \n");
	scanf ("%i",&g);
	printf ("¿cuatos pasteles medianos se vendierón \n");
	scanf ("%i",&m);
	printf ("¿cuantos pasteles chicos se vendierón? \n");
	scanf ("%i",&ch);
	printf ("¿cuantos panes se vendieron? \n");
	scanf ("%i",p);
	tot =(G*g)+ (M*m)+(CH*ch)+(P*p);
	printf("su venta total es de %.2f",tot);
	getch();
	return 0;
	
	
}
