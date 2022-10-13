//while / do...while loop
//1,4,9,16...n
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		j=i*i;
		printf("%d ",j);
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
		j=i*i;
		printf("%d ",j);
		i++;
	}while(i<=n);
}
*/
