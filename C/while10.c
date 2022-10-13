//while / do...while loop
//print A-a...Z-z
#include<stdio.h>
int main()
{
	char i,j;
	printf("alphabets from A-a to Z-z are:\n");
	i=65;
	while(i<=90)
	{
		j=i+32;
		printf("%c-%c ",i,j);
		i++;
	}
}


/*
#include<stdio.h>
int main()
{
	char i,j;
	printf("alphabets from A-a to Z-z are:\n");
	i=65;
	do
	{
		j=i+32;
		printf("%c-%c ",i,j);
		i++;
	}while(i<=90);
}*/
