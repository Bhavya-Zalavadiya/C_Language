#include<stdio.h>

struct emp{
	char name[10],com_n[10],city[10];
	int id,age,role,exp;
};
main()
{
	struct emp e;
	int n;
	printf("enter the number of emp. :");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("enter the name :");
	scanf("%s",&e.name);

		printf("enter the company name :");
	scanf("%s",&e.com_n);

		printf("enter the city :");
	scanf("%s",&e.city);

		printf("enter id number :");
	scanf("%d",&e.id);

		printf("enter the age :");
	scanf("%d",&e.age);

		printf("enter the roll number :");
	scanf("%d",&e.role);

		printf("enter the experience :");
	scanf("%d",&e.exp);

	printf("====================================\n");

	printf("enter the name :%s\n",e.name);
		printf("enter the company name :%s\n",e.com_n);
		printf("enter name city :%s\n",e.city);
		printf("enter id number :%d\n",e.id);
		printf("enter the age :%d\n",e.age);
		printf("enter the roll number :%d\n",e.role);
		printf("enter the experience :%d\n",e.exp);

	printf("************************************\n");		
    }

}
