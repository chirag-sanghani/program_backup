//while / do...while loop
//22222 44444 66666 88888 1010101010
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		int j=1;
		while(j<=5)
		{
			if(i%2==0)
			{
				printf("%d ",i);
				
			}
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
			if(i%2==0)
			{
				printf("%d ",i);
			}
			j++;
		}
	printf("\n");
	i++;
	}while(i<=10);
}
*/
