//while / do...while loop
//1,2,4,8,16...n
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the value: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d ",i);
		i=i*2;
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
		printf("%d ",i);
		i=i*2;
	}while(i<=n);
}
*/
