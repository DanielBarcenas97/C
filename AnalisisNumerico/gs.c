#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "matriz.c"

void pivoteo (double **a, double *b, int k, int n)
{
	int p,mayor,i,j,aux;
	double suma;
	
	p= k;
	mayor= fabs (a[k][k]);	 // Elemento pivote es el mayor
	suma= 0.0;
	for (j = 0; j < n; j++)	// iniciamos la busqueda a partir del sig. reglon al pivote
		if (j != k)
			suma= suma + fabs (a[k][j])
	if (mayor >= suma)	return;	
			
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
void gaussSeidel (double **a,double *b,double *x,int n,double es)
{
	int i,j,aux;
	double er,suma,x_ant;
	
	do {
		aux= 0;
		for (i= 0; i < n; i++) {
			suma= 0;
			for (j= 0; j < n; j++)
				if (j != i)
					suma= suma + a[i][j]*x[j];
			x_ant= x[i];
			x[i]= (b[i] -suma) / a[i][i];
			er = fabs (x[i] - x_ant);
			if (er > es) aux = 0;
		}	
	} while (aux == 1);
}
int main () {
	double **a,*b,*x,es;
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
	printf ("Error estimado: ");
	scanf ("%lf",&es);
	gaussSeidel (a,b,x,n,es);
	printf ("Vector solucion\n");
	for (i= 0; i < n; i++)
		printf ("x[%d]= %lf\n",i+1, x[i]);	
}







