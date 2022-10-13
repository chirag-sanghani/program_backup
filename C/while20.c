//while / do...while loop
//0.5,1,2.5,5...n
#include<stdio.h>
int main()
{
	float i,n,a=0.50;
	printf("enter the value: ");
	scanf("%f",&n);
	printf("%.2f ",a);
	i=0.50;
	while(i<=n)
	{
		a=a+i;
		printf("%.2f ",a);
		i++;
	}
}


/*
#include<stdio.h>
int main()
{
	float i,n,a=0.50;
	printf("enter the value: ");
	scanf("%f",&n);
	printf("%.2f ",a);
	i=0.50;
	do
	{
		a=a+i;
		printf("%.2f ",a);
		i++;
	}while(i<=n);
}
*/
