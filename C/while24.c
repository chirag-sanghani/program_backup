//while / do...while loop
//12345 12345 12345 12345 12345
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{
			printf("%d ",j);
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
	int i=1;
	do
	{
		int j=1;
		while(j<=5)
		{
			printf("%d ",j);
			j++;
		}
	printf("\n");
	i++;
	}while(i<=5);
}
*/
