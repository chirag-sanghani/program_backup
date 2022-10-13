//while / do...while loop
//A BA CBA DCBA EDCBA
#include<stdio.h>
int main()
{
	int i,j,n=65;
	i=65;
	while(i<=69)
	{
		j=i;
		while(j>=n)
		{
			printf("%c ",j);
			j--;
		}
	i++;
	printf("\n");
	}
}

/*
#include<stdio.h>
int main()
{
	int i,j,n=65;
	i=65;
	do
	{
		j=i;
		while(j>=n)
		{
			printf("%c ",j);
			j--;
		}
	i++;
	printf("\n");
	}while(i<=69);
}
*/