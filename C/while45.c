//while / do...while loop
// (mirror of phramid) * ** *** **** *****
#include<stdio.h>
int main()
{
	int i,j,sp=10;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=sp)
		{
			printf(" ");
			j++;
		}
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
	sp--;
	i++;
	printf("\n");
	}
}

/*
#include<stdio.h>
int main()
{
	int i,j,sp=10;
	i=1;
	do
	{
		j=1;
		while(j<=sp)
		{
			printf(" ");
			j++;
		}
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
	sp--;
	i++;
	printf("\n");
	}while(i<=5);
}
*/