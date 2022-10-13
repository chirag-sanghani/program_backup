//while / do...while loop
//1 23 456 78910 1112131415
#include<stdio.h>
int main()
{
	int i,j,n=1;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d ",n++);
			j++;
		}
	i++;
	printf("\n");
	}
}

/*
#include<stdio.h>
int main()
{
	int i,j,n=1;
	i=1;
	do
	{
		j=1;
		while(j<=i)
		{
			printf("%d ",n++);
			j++;
		}
	i++;
	printf("\n");
	}while(i<=5);
}
*/
