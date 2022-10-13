//while / do...while loop
//1112131415 2122232425 3132333435 4142434445 5152535455
#include<stdio.h>
int main()
{
	int i=1,n=11;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{
			printf("%d ",n++);
			j++;
		}
	printf("\n");
	i++;
	n=n+5;
	}		
}

/*
#include<stdio.h>
int main()
{
	int i=1,n=11;
	do
	{
		int j=1;
		while(j<=5)
		{
			printf("%d ",n++);
			j++;
		}
	printf("\n");
	i++;
	n=n+5;
	}while(i<=5);
}
*/
