// salario de un trabajador
#include <stdio.h>
#include <conio.h>

main(){
	float sn,sb,sh,d,p;
	int h;
	printf("escriba la cantidad de horas trabajadas");
	scanf ("%d",&h);
	printf ("escriba el pago por hora: \n");
	scanf ("%f",&sh);
	sb=h*sh;
	d=sb*.12;
	p=sb*.15;
	sn=sb+p-d;
	printf ("tu sueldo bruto es %.2f \n tus deducciones son %.2f \n tus percepciones son %.2f\n el neto es %.2f",sb,d,p,sn);
	getch();
	return 0;
	
}
