//1-d array -> sum of total element.

#include<stdio.h>
void main()
{
	int i,sum=0,a[5];
	for(i=0;i<5;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		printf("\n%d",a[i]);
	}
	printf("\ntotal element sum is : %d",sum);
}
