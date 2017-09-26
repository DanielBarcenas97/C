#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f (double x, double y) {
	return (-x*pow(y,2));
}
double metodoRK4 (double x0,double y0,double h,double xf) {
	int i= 0,n;
	double yi= y0,xi= x0;
	double k1,k2,k3,k4;
	
	n= (xf-x0)/h;		// No. de iteraciones
	printf ("i\tx\ty\n");
	printf ("%d\t%lf\t%lf\n",i,x0,y0);
	for (i= 0; i <= n; i++) {
		k1= f (xi,yi);
		k2= f (xi+0.5*h,yi+0.5*h*k1);
		k3= f (xi+0.5*h,yi+0.5*h*k2);
		k4= f (xi+h,yi+h*k3);
		yi= yi + (h/6.0)*(k1+2*k2+2*k3+k4);
		xi= xi + h;
		printf ("%d\t%lf\t%lf\n",i+1,xi,yi);
	}
	return yi;
}
double metodoDeEuler (double x0,double y0,double h,double xf)
{
	int i= 0,n;
	double yi= y0,xi= x0;
	
	n= (xf-x0)/h;		// No. de iteraciones
	printf ("i\tx\ty\n");
	printf ("%d\t%lf\t%lf\n",i,x0,y0);
	for (i= 0; i <= n; i++)
	{
		yi= yi+h*f(xi,yi);		// yi+1
		xi= xi+h;				// xi+1
		printf ("%d\t%lf\t%lf\n",i+1,xi,yi);
	}
	return yi;
}
int main (int argc, char *argv[])
{
	double x0,y0,h,xf,va,vr,va_rk;
	
	printf ("Condicion inicial (x0,y0): ");
	scanf ("%lf,%lf",&x0,&y0);
	do {
		printf ("Paso: ");
		scanf ("%lf",&h);
		if (h > 0) break;
		printf ("Valor invalido\n");
	} while (1);
	do {
		printf ("Valor final: ");
		scanf ("%lf", &xf);
		if (xf > x0) break;
	} while (1);
	printf ("Metodo de Euler");
	va= metodoDeEuler (x0,y0,h,xf);
	printf ("Metodo de Runge Kutta");
	va_rk= metodoRK4 (x0,y0,h,xf);
	if (argc > 1) {
		vr= atof (argv[1]);
		printf ("Valor real= %lf\n", vr);
		printf ("Valor aprox. Euler= %lf\n", va);
		printf ("Error= %.4lf%%\n", fabs ((vr-va)/vr*100));
		printf ("Valor aprox. RK= %lf\n", va_rk);
		printf ("Error= %.4lf%%\n", fabs ((vr-va_rk)/vr*100));
	}
}






