//array -> sum of 2 numbers.

#include<stdio.h>
void main()
{
	int i,a[5],b[5],sum[5];
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
		printf("Enter b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	printf("\n");
	printf("a\tb\tsum\n-------------------");
	for(i=0;i<5;i++)
	{
		sum[i]=a[i]+b[i];
		printf("\n%d",a[i]);
		printf("\t%d",b[i]);
		printf("\t%d",sum[i]);
	}
}
