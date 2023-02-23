#include <stdio.h>

int n=4, m=4;
void main()
{
	int i, j, matr[n][m];
	for (i=1; i<n; i++)
	{
		for (j=1; j<m; j++)
		{
			printf("[%d][%d]=", i, j);
			scanf ("%d", &matr[i][j]);
		}
	}
	for (i=1; i<n; i++)
	{
		for (j=1; j<m; j++)
		{
			printf ("%d\t", matr[i][j]);
		}
		printf ("\n");
	}
	for (i=1; i<n; i++)
	for (j=1; j<m; j++)
	if (matr[i][j]>0)
	printf ("nomer %d\n", i);
	return 0;
}