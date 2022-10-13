Updated sheet
// array -> same datatype collection
// datatype name[size]
// size -> index start with 0
// a[5] -> a[0], a[1], a[2], a[3], a[4]

#include<stdio.h>
void main()
{
	int i,a[5];
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\na[%d]: %d",i,a[i]);
	}
}
