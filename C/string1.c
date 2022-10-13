//reverse string

#include<stdio.h>
int main()
{
	char str[50],rev[50];
	int k;
	printf("Enter string: ");
	gets(str);

	int i;
	for(i=0;str[i] !='\0';i++);
	
	k=i;
	for(int j=0; j<=i;j++)
	{
		rev[j] = str[--k];
	}
	rev[i] = '\0';
	printf("\nString length is: %d",i);
	printf("\nReverse string is: %s\n",rev);
}
