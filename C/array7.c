//2-d array -> sum of two 3*3 matrix.

#include<stdio.h>
void main()
{
	int i,j,a[5][5],b[5][5],sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter b[%d][%d]: ",i,j);
		 	scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	printf("A\tB\tSum\n-------------------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\t");
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\t");
		for(j=0;j<3;j++)
		{
			sum=a[i][j]+b[i][j];
			printf("%d ",sum);
		}
		printf("\n");
	}
}
