//while / do...while loop
//1,4,3,16,5...n
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		{
			j=i*i;
			printf("%d ",j);
		}
		else
		{
			printf("%d ",i);
		}
		i++;
	}
}


/*
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value: ");
	scanf("%d",&n);
	i=1;
	do
	{
		if(i%2==0)
		{
			j=i*i;
			printf("%d ",j);
		}
		else
		{
			printf("%d ",i);
		}
		i++;
	}while(i<=n);
}
*/
