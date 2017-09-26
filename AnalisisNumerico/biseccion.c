#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int func = 1;

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

double biseccion (double a, double b, double es) {
	double c, er;
	int iter= 1;
	do {
		c= (a+b)/2.0;
		if (f (a) * f (c) < 0)	// Hay un cambio de signo
			 b= c;
		else a= c;	
		er= fabs (b-a);
		printf ("%2d %.5lf %.5lf %.5lf %.5lf\n", iter,a,b,c,er);
		iter++;
	} while (er > es && f (c) != 0);
	return c;
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
	double a,b,es;
	
	while (menu () != 0) {
		do {
			printf ("Lim. inferior: ");
			scanf ("%lf", &a);
			printf ("Lim. superior: ");
			scanf ("%lf", &b);
			if (f(a) * f (b) < 0) break;
			printf ("El intervalo dado no encierra una raiz\n");
		} while (1);
		do {
			printf ("Error estimado: ");
			scanf ("%lf", &es);
		} while (es > 1 || es < 0);
		printf ("La raiz aproximada es: %lf\n", biseccion (a,b,es));
		system ("pause");
	}
}








