#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "matriz.c"

void pivoteoGJ (double **a, int k, int n)
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
		for (j = 0; j < n+1; j++) {
			aux= a[k][j];
			a[k][j]= a[p][j];
			a[p][j]= aux;
		}
	}
}
void eliminacionGaussJordan (double **a, int n){
	int i,j,k;
	double cte;
	
	for (i= 0; i < n; i++) {	// Estable el renglon pivote
		imprimeMatriz (a,n,n+1);
		printf ("--------------------------------\n");
		pivoteoGJ (a,i,n);
		imprimeMatriz (a,n,n+1);
		system ("pause");
		cte= a[i][i];
		for (j= 0; j < n+1; j++)	// Normalizamos el renglon 
			a[i][j]= a[i][j] / cte;
		for (j= 0; j < n; j++)// Estable el renglon x eliminacion
		{
			if (j != i) {
				cte= a[j][i];
				for (k= i; k < n+1; k++)	// recorre las columnas de ambos renglones
					a[j][k]= a[j][k] -cte*a[i][k];
			}
		}
	}
}
int main () {
	double **a;
	int n;
	
	do {
		printf ("No. de ecuaciones: ");
		scanf ("%d",&n);
		if (n > 1) break;
		printf ("No. de ecs. debe ser mayor que 1: ");
	} while (1);
	// Obtenemos memoria para los arreglos
	a= memoriaMatriz (n,n+1);
	printf ("Matriz de coeficientes ampliada\n");
	leeMatriz (a,n,n+1);
	eliminacionGaussJordan (a,n);
	printf ("Matriz Identidad\n");
	imprimeMatriz (a,n,n+1);
}








