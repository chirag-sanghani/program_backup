//while / do...while loop
//1,4,12,32,80...n
#include<stdio.h>
int main()
{
	int i,n,a=1;
	printf("enter the value: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d ",a*i);
		i++;
		a=a+a;
	}
}


/*
#include<stdio.h>
int main()
{
	int i,n,a=1;
	printf("enter the value: ");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("%d ",a*i);
		i++;
		a=a+a;
	}while(i<=n);
}
*/
