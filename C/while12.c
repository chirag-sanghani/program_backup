//while / do...while loop
//total odd 1,3,5
#include<stdio.h>
int main()
{
	int i,sum=0;
	i=0;
	while(i<=5)
	{	
		if(i%2==1)
		{
			printf("%d ",i);
			sum=sum+i;
		}
		i++;
	}
	
	printf("\nTotal sum is : %d",sum);
}


/*
#include<stdio.h>
int main()
{
	int i,sum=0;
	i=0;
	do
	{
		if(i%2==1)
		{
			printf("%d ",i);
			sum=sum+i;
		}
		i++;
	}while(i<=5);
	printf("\nTotal sum is : %d",sum);
}
*/