double **memoriaMatriz (int n,int m) {
	int i;
	double **mat;
	
	mat= (double **) calloc (n,sizeof (double *));
	for (i= 0; i < n; i++)
		mat[i]= (double *) calloc (m,sizeof (double));
	return mat;
}
void leeMatriz (double **mat, int n, int m) {
	int i,j;
	
	for (i= 0; i < n; i++)
		for (j= 0; j < m; j++) {
			printf ("Elemento %d,%d: ",i+1,j+1);
			scanf ("%lf",&mat[i][j]);
		}
}
void imprimeMatriz (double **mat, int n, int m) {
	int i,j;
	
	for (i= 0; i < n; i++) {
		for (j= 0; j < m; j++)
			printf ("%lf\t",mat[i][j]);
		printf ("\n");
	}
}

