//array -> result - total of 3 subject, percentage, grade.

#include<stdio.h>
void main()
{
	int i,eng[5],guj[5],hin[5],total[5];
	float per[5];
	for(i=0;i<5;i++)
	{
		printf("enter eng[%d]: ",i);
		scanf("%d",&eng[i]);
		printf("enter guj[%d]: ",i);
		scanf("%d",&guj[i]);
		printf("enter hin[%d]: ",i);
		scanf("%d",&hin[i]);
	}
	printf("\n");
	printf("eng\tguj\thin\ttotal\tper.\t grade\n-----------------------------------------------------------");
	for(i=0;i<5;i++)
	{
		total[i]=eng[i]+guj[i]+hin[i];
		per[i]=(total[i]*100)/300;
		printf("\n%d",eng[i]);
		printf("\t%d",guj[i]);
		printf("\t%d",hin[i]);
		printf("\t%d",total[i]);
		printf("\t%.2f",per[i]);
		
		if(per[i]>=80)
		{  printf("\t result is Grade A");  }
		
		else if(per[i]>=60  && per[i]<80)
		{  printf("\t result is Grade B");  }
		
		else if(per[i]>=45  && per[i]<60)
		{  printf("\t result is Grade C");  }
		
		else if(per[i]>=35  && per[i]<45)
		{  printf("\t result is Grade D");  }
		
		else if(per[i]<35)
		{  printf("\t result is Fail");  }
	}
}
