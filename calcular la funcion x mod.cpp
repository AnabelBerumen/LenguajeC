/*calcular la siguiente funcion  f(x){
x^2 si xmod 4 =0 
x^3 si xmod 4 =1
x/6 si xmod 4 =2
2x+5 si xmod 4 =3}
*/

#include <stdio.h>
#include <conio.h>
main (){
	int x,m;
	float y=0;
	printf ("Dame el valor de x");
	scanf ("%i", &x);
	m=x%4;
	switch(m){
		case(0): y=x*x;
				break;
		case(1): y= x*x*x;
				break;
		case(2): y=(float)x/6;
				break;
		case(3): y=2*x+5;
	}
	printf("resultado de x funcion de: %.2f ",y);
}
