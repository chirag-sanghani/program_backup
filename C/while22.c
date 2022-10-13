//while / do...while loop
//11111 22222 33333 44444 55555
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{
			printf("%d ",i);
			j++;
		}
	printf("\n");
	i++;
	}
}

/*
#include<stdio.h>
int main()
{
	int i=1;
	do
	{
		int j=1;
		while(j<=5)
		{
			printf("%d ",i);
			j++;
		}
	printf("\n");
	i++;
	}while(i<=5);
}
*/
