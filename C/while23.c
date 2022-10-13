//while / do...while loop
//55555 44444 33333 22222 11111
#include<stdio.h>
int main()
{
	int i=5;
	while(i>=1)
	{
		int j=5;
		while(j>=1)
		{
			printf("%d ",i);
			j--;
		}
	printf("\n");
	i--;
	}		
}

/*
#include<stdio.h>
int main()
{
	int i=5;
	do
	{
		int j=5;
		while(j>=1)
		{
			printf("%d ",i);
			j--;
		}
	printf("\n");
	i--;
	}while(i>=1);
}
*/
