//while / do...while loop
//A,c,E,g,I...n
#include<stdio.h>
int main()
{
	int i;
	i=0;
	while(i<=24)
	{
		if(i%4==0)
		{
			printf("%c ",i+65);
		}
		else
		{
			printf("%c ",i+65+32);
		}
		i=i+2;
	}
}


/*
#include<stdio.h>
int main()
{
	int i;
	i=0;
	do
	{
		if(i%4==0)
		{
			printf("%c ",i+65);
		}
		else
		{
			printf("%c ",i+65+32);
		}
		i=i+2;
	}while(i<=24);
}
*/
