#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int func = 1;
int iter= 1;

double f (double x) {
	switch (func) {
		case 1:
			return exp (x) - 5;
		case 2:
			return pow (x,2)+3*x+2;
		default:
			return exp (x) - 5;
	}
}
double secante (double x0, double x1, double es, int imax) {
	double er,x;
	double y0,y1;

	iter= 1;
	y0= f (x0);
	y1= f (x1);
	do {
		if (iter > imax) {
			printf ("El metodo no converge en %d iteraciones.\n", iter);
			break;
		}
		x= x1 - (y1*(x1-x0))/(y1-y0);
		
		er= fabs (x-x1);
		
		printf ("%2d %.5lf %.5lf %.5lf %.5lf\n", iter,x0,x1,x,er);
		iter++;
		x0= x1;
		x1= x;
		y0= y1;
		y1= f (x);
	} while (er > es && f (x) != 0);
	
	return x;
}
int menu () {
	do {
		system ("cls");		// Limpia la pantalla
		printf ("1. exp(x) - 5\n");
		printf ("2. x^2 + 3x + 2\n");
		printf ("0. Salir\n");
		printf ("\nOpcion: ");
		 
		scanf ("%d",&func);
	} while (func < 0 || func > 2);
	return func;
}
int main ()
{
	int imax;
	double x,x0,x1,es;
	
	while (menu () != 0) {
		printf ("Valor inicial x0: ");
		scanf ("%lf", &x0);
		printf ("Valor inicial x1: ");
		scanf ("%lf", &x1);
		printf ("No. maximo de iteraciones: ");
		scanf ("%d", &imax);
		do {
			printf ("Error estimado: ");
			scanf ("%lf", &es);
		} while (es > 1 || es < 0);
		x= secante (x0,x1,es,imax);
		if (iter <= imax)
			printf ("La raiz aproximada es: %lf\n", x);
		system ("pause");
	}
}








