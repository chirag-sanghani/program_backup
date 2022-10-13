//while / do...while loop
//11111 33333 55555 77777 99999
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		int j=1;
		while(j<=5)
		{
			if(i%2==1)
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
			if(i%2==1)
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
