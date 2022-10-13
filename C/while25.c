//while / do...while loop
//AAAAA BBBBB CCCCC DDDDD EEEEE
#include<stdio.h>
int main()
{
	int i=65;
	while(i<=69)
	{
		int j=65;
		while(j<=69)
		{
			printf("%c ",i);
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
	int i=65;
	do
	{
		int j=65;
		while(j<=69)
		{
			printf("%c ",i);
			j++;
		}
	printf("\n");
	i++;
	}while(i<=69);
}
*/
