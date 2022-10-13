//string => skill = s l k l i

#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter string: ");
	gets(str);
	int i,k,j;
	for(i=0;str[i] !='\0';i++);
	k = i;
	printf("\nYour string is: ");
	for(j=0;j<(i/2);j++)
	{
		printf("%c %c ",str[j],str[--k]);
	}
	if(i%2!=0)
	printf("%c",str[(i/2)]);
	printf("\nString length is: %d\n",i);
	str[i] = '\0';
}
