//1-d array -> sum of diagonal element
//1-d array -> sum of upper triangle element
//1-d array -> sum of lower triangle elements

#include<stdio.h>
void main()
{
	int i,j,a[5][5],row,col,x=0,y=0,z=0;
	printf("-----------------------------\n");
	printf("enter the number of row : ");
	scanf("%d",&row);
	printf("enter the number of column : ");
	scanf("%d",&col);
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
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j)
				x = x + a[i][j];
			else if(i<j)
				y = y + a[i][j];
			else if(i>j)
				z = z + a[i][j];			
		}
	}
	printf("-----------------------------\n");
	printf("Sum of diagonal elements = %d\n",x);
	printf("Sum of upper triangle elements = %d\n",y);
	printf("Sum of lower triangle elements = %d\n",z);	
}
