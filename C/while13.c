//while / do...while loop
//total even 2,4,6
#include<stdio.h>
int main()
{
	int i,sum=0;
	i=0;
	while(i<=6)
	{
		if(i%2==0)
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
		if(i%2==0)
		{
			printf("%d ",i);
			sum=sum+i;
		}
		i++;
	}while(i<=6);
	printf("\nTotal sum is : %d",sum);
}
*/