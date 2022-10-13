//while / do...while loop
//5 44 333 2222 11111
#include<stdio.h>
int main()
{
	int i,j;
	i=5;
	while(i>=1)
	{
		j=5;
		while(j>=i)
		{
			printf("%d ",i);
			j--;
		}
	i--;
	printf("\n");
	}
}

/*
#include<stdio.h>
int main()
{
	int i,j;
	i=5;
	do
	{
		j=5;
		while(j>=i)
		{
			printf("%d ",i);
			j--;
		}
	i--;
	printf("\n");
	}while(i>=1);
}
*/
