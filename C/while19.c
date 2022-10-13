//while / do...while loop
//1,1,2,3,5...n
#include<stdio.h>
int main()
{
	int i,n,a=1,b=0,c;
	printf("enter the value: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		i++;
	}
}


/*
#include<stdio.h>
int main()
{
	int i,n,a=1,b=0,c;
	printf("enter the value: ");
	scanf("%d",&n);
	i=1;
	do
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		i++;
	}while(i<=n);
}
*/
