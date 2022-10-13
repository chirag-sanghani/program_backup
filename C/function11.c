//Recursive function
//Fibonacci Series with Recursive function using function
#include<stdio.h>
int fibonacci(int);
int main()
{
	int n, i; 
	printf("Enter the number : "); 
	scanf("%d",&n); 
	printf("fibonacci series : ");
	for(i=1;i<=n;i++)
    { 
		printf("%d ",fibonacci(i));
	}
}
int fibonacci(int i)
{
	if(i==0)
        return 0; 
	else if(i==1)
        return 1; 
	else
        return (fibonacci (i-1) + fibonacci (i-2));
}