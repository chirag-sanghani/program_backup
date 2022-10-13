//while / do...while loop
//total 1,2,...10 = 55
#include<stdio.h>
int main()
{
	int i,sum=0;
	i=1;
	while(i<=10)
	{
		printf("%d ",i);
		sum=sum+i;
		i++;
	}
	printf("\nTotal sum is : %d",sum);
}


/*
#include<stdio.h>
int main()
{
	int i,sum=0;
	i=1;
	do
	{
		printf("%d ",i);
		sum=sum+i;
		i++;
	}while(i<=10);
	printf("\nTotal sum is : %d",sum);
}
*/