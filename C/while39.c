//while / do...while loop
//A BC DEF GHIJ KLMNO
#include<stdio.h>
int main()
{
	int i,j,n=65;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%c ",n++);
			j++;
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
	i=1;
	do
	{
		j=1;
		while(j<=i)
		{
			printf("%c ",n++);
			j++;
		}
	i++;
	printf("\n");
	}while(i<=5);
}
*/