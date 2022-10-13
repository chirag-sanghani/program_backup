//while / do...while loop
//ABCDE FGHIJ KLMNO PQRST UVWXY
#include<stdio.h>
int main()
{
	int i=65,n=65;
	while(i<=69)
	{
		int j=65;
		while(j<=69)
		{
			printf("%c ",n++);
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
	int i=65,n=65;
	do
	{
		int j=65;
		while(j<=69)
		{
			printf("%c ",n++);
			j++;
		}
	printf("\n");
	i++;
	}while(i<=69);
}
*/
