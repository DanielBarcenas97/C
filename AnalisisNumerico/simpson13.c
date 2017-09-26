#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f (double x)
{
	return pow (x,2);
}
double sumaPares (double a,double h, int n)
{
	double suma= 0.0;
	int i;
	
	for (i = 2; i <= n-2; i += 2)
		suma= suma + f (a+h*i);
		return suma;
}
double sumaImpares (double a,double h, int n)
{
	double suma= 0.0;
	int i;
	
	for (i = 1; i <= n-1; i += 2)
		suma= suma + f (a+h*i);
		return suma;
}
int main ()
{
	double a,b,h,I;
	int n;
	
	printf ("Limite inferior: ");
	scanf ("%lf", &a);
	printf ("Limite superior: ");
	scanf ("%lf", &b);
	do {
		printf ("No. de particiones: ");
		scanf ("%d", &n);
		if (n > 0 && n % 2 == 0)	// # par
			break;
		printf ("El numero de particiones debe ser par\n");
	}
	while (1);
	h= (b-a)/n;
	I= (h/3)*(f(a)+4*sumaImpares (a,h,n)+2*sumaPares (a,h,n)+f(b));
	printf ("La aprox. de la integral por Simpson 1/3= %lf\n",I);	
}








