//while / do...while loop
//A bc DEF ghij KLMNO
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
			if(i%2==0)
			{
				printf("%c ",n+32);
			}
			else
			{
				printf("%c ",n);
			}
			n++;
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
			if(i%2==0)
			{
				printf("%c ",n+32);
			}
			else
			{
				printf("%c ",n);
			}
			n++;
			j++;
		}
	i++;
	printf("\n");
	}while(i<=5);
}
*/
