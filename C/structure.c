//Structure => group collection of different type of variable.
//user define date type
#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[50];
    int maths,english,scince;
    float total, percentage;
};
int main()
{
    struct student s[5];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter roll no: ");
        scanf("%d",&s[i].roll_no);
        printf("Enter name: ");
        scanf("%s",&s[i].name);
        printf("Enter maths marks: ");
        scanf("%d",&s[i].maths);
        printf("Enter english marks: ");
        scanf("%d",&s[i].english);
        printf("Enter scince marks: ");
        scanf("%d",&s[i].scince);
    }
    printf("\nRoll_no\tName\tMaths\tEng\tScince\tTotal\tPercentage");
    printf("\n----------------------------------------------------------");
    for(i=0;i<2;i++)
    {
        s[i].total = s[i].maths + s[i].english + s[i].scince;
        s[i].percentage = s[i].total / 3;
        printf("\n%d\t%s\t%d\t%d\t%d\t%.2f\t%.2f",s[i].roll_no,s[i].name,s[i].maths,s[i].english,s[i].scince,s[i].total,s[i].percentage);
    }
}