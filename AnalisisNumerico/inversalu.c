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
void descomposicionLU (double **a, double **b, int n){
	int i,j,k;
	double cte;
	 
	for (i= 0; i < n-1; i++) {	// Estable el renglon pivote
//		pivoteo (a,b,i,n);
		for (j= i+1; j < n; j++)// Estable el renglon x eliminacion
		{
			cte= a[j][i]/a[i][i];
			a[j][i]= cte;		// Ljk
			for (k= i+1; k < n; k++)
				a[j][k]= a[j][k] -cte*a[i][k];
		}
	}
}
void sustitucionProgresiva (double **a,double **b,int n) {
	int i,j,k;
	double suma;

	for (k= 0; k < n; k++)	
		for (i= 0; i < n; i++) {
			suma= 0;
			for (j= 0; j <= i-1; j++)
				suma = suma + a[i][j]*b[j][k];
			b[i][k]= b[i][k] - suma;
		}
}
void sustitucionRegresiva (double **a,double **b,double **x,int n) {
	int i,j,k;
	double suma;

	for (k= 0; k < n; k++)	
		for (i= n-1; i >= 0; i--) {
			suma= 0;
			for (j= i+1; j < n; j++)
				suma = suma + a[i][j]*x[j][k];
			x[i][k]= (b[i][k] - suma) / a[i][i];
		}
}
int main () {
	double **a,**b,**x;
	int i,n;
	
	do {
		printf ("No. de ecuaciones: ");
		scanf ("%d",&n);
		if (n > 1) break;
		printf ("No. de ecs. debe ser mayor que 1: ");
	} while (1);
	// Obtenemos memoria para los arreglos
	a= memoriaMatriz (n,n);
	b= memoriaMatriz (n,n);
	x= memoriaMatriz (n,n);
	
	printf ("Matriz de coeficientes\n");
	leeMatriz (a,n,n);
	printf ("Terminos independientes\n");
	for (i= 0; i < n; i++)
		b[i][i]= 1;
	// Escalonamos la matriz de coeficientes
	descomposicionLU (a,b,n);
	printf ("Matriz descompuesta\n");
	imprimeMatriz (a,n,n);
	sustitucionProgresiva (a,b,n);
	sustitucionRegresiva (a,b,x,n);
	printf ("Matriz inversa\n");
	imprimeMatriz (x,n,n);
}







