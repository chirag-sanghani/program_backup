//while / do...while loop
//A AB ABC ABCD ABCDE
#include<stdio.h>
int main()
{
	int i,j;
	i=65;
	while(i<=69)
	{
		j=65;
		while(j<=i)
		{
			printf("%c ",j);
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
	int i,j;
	i=65;
	do
	{
		j=65;
		while(j<=i)
		{
			printf("%c ",j);
			j++;
		}
	i++;
	printf("\n");
	}while(i<=69);
}
*/
