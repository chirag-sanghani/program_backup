//Running total in Array using function...

#include <stdio.h>
#define n 5
int running_total(int a[])
{
    int i,total;
    printf("Running totoal :\n");
    for (i = 0; i < n; i++)
    {
        if(i==0)
            printf("%d",a[i]);
        else
        {
            total = a[i] + a[i-1];
            printf("\n%d\t%d",a[i],total);
        }
    }
}
void main()
{
    int a[n],i;
    for(i=0;i<n;i++)
    {
        printf("enter element : ",i);
        scanf("%d",&a[i]);
    }
    running_total(a);
}