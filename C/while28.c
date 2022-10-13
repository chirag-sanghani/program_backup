//while / do...while loop
//12345 678910 1112131415 16171819120 2122232425
#include<stdio.h>
int main()
{
	int i=1,n=1;
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
	}		
}

/*
#include<stdio.h>
int main()
{
	int i=1,n=1;
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
	}while(i<=5);
}
*/
