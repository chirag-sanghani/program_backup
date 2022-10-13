//concatinate string = skill + qode = skillqode

#include<stdio.h>
int main()
{
	char a[50],b[50];
	printf("Enter A: ");
	gets(a);
	printf("Enter B: ");
	gets(b);
	int i,j;
	for(i=0;a[i] !='\0';i++);
	for(j=0;b[j] !='\0';j++)
	{
		a[i] = b[j];
		i++;
	}
	a[i] = '\0';
	printf("\nString length is: %d",i);
	printf("\nYour string is: %s\n",a);
}
