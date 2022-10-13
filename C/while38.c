//while / do...while loop
//a bC dEf gHiJ kLmNo
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
			if(j%2==0)
			{
				printf("%c ",n);
			}
			else
			{
				printf("%c ",n+32);
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
			if(j%2==0)
			{
				printf("%c ",n);
			}
			else
			{
				printf("%c ",n+32);
			}
			n++;
			j++;
		}
	i++;
	printf("\n");
	}while(i<=5);
}
*/