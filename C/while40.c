//while / do...while loop
//5 45 345 2345 12345
#include<stdio.h>
int main()
{
	int i,j;
	i=5;
	while(i>=1)
	{
		j=i;
		while(j<=5)
		{
			printf("%d ",j);
			j++;
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
		j=i;
		while(j<=5)
		{
			printf("%d ",j);
			j++;
		}
	i--;
	printf("\n");
	}while(i>=1);
}
*/