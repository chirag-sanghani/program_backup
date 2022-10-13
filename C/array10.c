//1-d array -> Identity Matrix

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
	printf("IDENTITY MATRIX is :- \n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j)
			printf("1 ");
			else 
			printf("0 ");
		}
		printf("\n");
	}
	printf("-----------------------------");
}
