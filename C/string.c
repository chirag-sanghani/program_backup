//string -> collection of char
//Hello '\0' -> NULL CHAR

#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter string : ");
	// scanf("%s",str);		// space not allowed
	// scanf("%[^\n]s",str);	// space allowed
	gets(str);			// space allowed
	printf("\nString is: %s",str);
	//puts(str);

	int i;
	for(i=0;str[i] !='\0';i++);
	printf("\nString length is: %d\n",i);
}
