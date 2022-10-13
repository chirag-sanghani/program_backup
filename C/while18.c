//while / do...while loop
//A,C,E,G,I...n
#include<stdio.h>
int main()
{
	int i;
	i=65;
	while(i<=90)
	{
		if(i%2==1)
		printf("%c ",i);
		i++;
	}
}


/*
#include<stdio.h>
int main()
{
	int i;
	i=65;
	do
	{
		if(i%2==1)
		printf("%c ",i);
		i++;
	}while(i<=90);
}
*/
