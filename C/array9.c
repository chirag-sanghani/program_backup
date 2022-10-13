//1-d array -> Sparse Matrix

#include<stdio.h>
void main()
{
	int a[10][10],i,j,row,col;
	printf("-----------------------------\n");
	printf ("Enter the number of row : ");
	scanf ("%d", &row);
	printf ("Enter the number of column : ");
	scanf ("%d", &col);
	printf("-----------------------------\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("-----------------------------\n");
	printf("Enter elements is :- \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------\n");
	printf("Sparse Matrix is :- \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]==0)
			printf("  ");
			else
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------");
}
