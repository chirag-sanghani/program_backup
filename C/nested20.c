#include<stdio.h>
void main()
{
	int i,j,n=5;
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}



/*
#include<stdio.h>
void main()
{
	int i,j,n=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j-i+n);
		}
		printf("\n");
	}
}
*/