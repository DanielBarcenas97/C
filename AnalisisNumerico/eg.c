#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "matriz.c"

void pivoteo (double **a, double *b, int k, int n)
{
	int p,mayor,i,j,aux;
	
	p= k;
	mayor= fabs (a[k][k]);	 // Elemento pivote es el mayor
	for (i = k+1; i < n; i++)// iniciamos la busqueda a partir del sig. reglon al pivote
		if (a[i][k] > mayor) {
			mayor= fabs (a[i][k]);
			p = i;
		}
	// Si encontramos un nuevo renglon pivote
	if (p != k) {
		// intercambiamos renglones
		for (j = 0; j < n; j++) {
			aux= a[k][j];
			a[k][j]= a[p][j];
			a[p][j]= aux;
		}
		aux= b[k];
		b[k]= b[p];
		b[p]= aux;
	}
}
void eliminacionGaussiana(double **a, double *b, int n){
	int i,j,k;
	double cte;
	
	for (i= 0; i < n-1; i++) {	// Estable el renglon pivote
		pivoteo (a,b,i,n);
		for (j= i+1; j < n; j++)// Estable el renglon x eliminacion
		{
			cte= a[j][i]/a[i][i];
			for (k= i; k < n; k++)
				a[j][k]= a[j][k] -cte*a[i][k];
			b[j]= b[j] -cte*b[i];
		}
	}
}
void sustitucionRegresiva (double **a,double *b,double *x,int n) {
	int i,j;
	double suma;
	
	for (i= n-1; i >= 0; i--) {
		suma= 0;
		for (j= i+1; j < n; j++)
			suma = suma + a[i][j]*x[j];
		x[i]= (b[i] - suma) / a[i][i];
	}
}
int main () {
	double **a,*b,*x;
	int i,n;
	
	do {
		printf ("No. de ecuaciones: ");
		scanf ("%d",&n);
		if (n > 1) break;
		printf ("No. de ecs. debe ser mayor que 1: ");
	} while (1);
	// Obtenemos memoria para los arreglos
	a= memoriaMatriz (n,n);
	b= (double *) calloc (n,sizeof (double));
	x= (double *) calloc (n,sizeof (double));
	printf ("Matriz de coeficientes\n");
	leeMatriz (a,n,n);
	printf ("Terminos independientes\n");
	for (i= 0; i < n; i++) {
		printf ("b[%d]= ",i+1);
		scanf ("%lf", &b[i]);
	}
	// Escalonamos la matriz de coeficientes
	eliminacionGaussiana (a,b,n);
	printf ("Matriz escalonada\n");
	imprimeMatriz (a,n,n);
	sustitucionRegresiva (a,b,x,n);
	printf ("Vector solucion\n");
	for (i= 0; i < n; i++)
		printf ("x[%d]= %lf\n",i+1, x[i]);	
}








