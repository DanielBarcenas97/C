#include <stdio.h>
#include <math.h>

#define epsilon 0.00000001

void chicharronera(double a, double b, double c)
{
	double x1, x2, disc;
	
	disc = pow(b, 2) - 4*a*c;
	if (disc >= -epsilon)
	{
		x1 = (-b + sqrt(disc)) / 2*a;	
		x2 = (-b - sqrt(disc)) / 2*a;
		printf("\n x = %g", x1);
		printf("\n x = %g", x2);
	}
	else
	{
		x1 = -b / 2*a;
		x2 = sqrt(-disc) / 2*a;
		if (fabs(x1) < epsilon)
			x1 = 0;
		printf("\n x = %g + %g i", x1, x2);
		printf("\n x = %g - %g i", x1, x2);
	}	
}

int main(void)
{
	int i, n = 5;
	double r, s, dr, ds, error;
	double A[n+1], B[n+1], C[n+1];
		
	A[5] = 1;
	A[4] = -3.5;
	A[3] = 2.75;
	A[2] = 2.125;
	A[1] = -3.875;
	A[0] = 1.25;
	
	r = 0;
	s = 0;	
	
	// Metodo de Factores Cuadraticos
	while (n >= 3)
	{				
		// Metodo Newton Raphson
		error = 1;
		while (error > epsilon)
		{
			// Division sintetica -> Obtencion de factor cuadratico
			B[n] = A[n];
			B[n-1] = A[n-1] + r*B[n];
			for (i = n-2; i >= 0; i--)
			{
				B[i] = A[i] + r*B[i+1] + s*B[i+2];
			}
			
			// Division sintetica -> Obtencion de derivadas parciales
			C[n] = B[n];
			C[n-1] = B[n-1] + r*C[n];
			for (i = n-2; i >= 0; i--)
			{
				C[i] = B[i] + r*C[i+1] + s*C[i+2];
			}
			
			// Resolviendo sistema de ecuaciones
			ds = (B[0]*C[2] - B[1]*C[1]) / (C[1]*C[3] - C[2]*C[2]);
			dr = -(B[0] + C[2]*ds) / C[1];
			
			// Nuevos valores para r y s
			r = r + dr;
			s = s + ds;
	
			// Calculo de error
			error = fabs(B[0]) + fabs(B[1]);	
		}

		// Evaluacion de formula general
		chicharronera(1, -r, -s);
		
		// Reduccion del polinomio original
		n = n - 2;
		for (i = 0; i <= n; i++)
			A[i] = B[i+2];
	}	
	
	if (n == 1)
	{
		// Calculo de polinomio impar
		printf("\n x = %g", -A[0] / A[1]);
	}	
	else
	{
		// Calculo de polinomio par
		chicharronera(A[2], A[1], A[0]);
	}
	
	getchar();	
	return 0;
}
