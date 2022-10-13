//1-d array -> sum of even position (index).

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
		if(i%2==0)
		{
			sum=sum+a[i];
			printf("\n%d",a[i]);
		}
	}
	printf("\neven position (index) sum is : %d",sum);
}


//1-d array -> sum of odd position (index).

/*#include<stdio.h>
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
		if(i%2==1)
		{
			sum=sum+a[i];
			printf("\n%d",a[i]);
		}
	}
	printf("\nodd position (index) sum is : %d",sum);
}
*/